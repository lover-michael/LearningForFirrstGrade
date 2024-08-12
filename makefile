#powershellで動かすことを前提に作っています(特にcleanの所の「erase」コマンドはcmd限定です)

#コンパイラ
CXX		= g++

#コンパイルオプション
CXXFLAGS	= -lm

#実行ファイル名
TARGET	= out

#コンパイルファイル
SRCDIR	= _src
SRCS	= $(wildcard $(SRCDIR)/*.cpp)

#中間実行ファイル生成
OBJDIR	=
OBJS	= $(addprefix $(OBJDIR), $(notdir $(SRCS:.cpp=.o)))

#インクルードディレクトリ
INCDIR	= -I _include

#ライブラリディレクトリパス
LIBDIR	= -lwsock32

#追加するライブラリファイル
LIBS	= -lm -fexec-charset=cp932

#ターゲットファイルの生成
$(TARGET): $(OBJS)
	$(CXX) -o $@ $^ $(LIBDIR) $(LIBS)

#オブジェクトファイル生成
$(OBJS): $(SRCS)
	$(CXX) $(CXXFLAGS) $(INCDIR) -c $(SRCS)

#"make all" で make clean & make を同時に行う
all: clean $(OBJS) $(TARGET)

#.oファイル、実行ファイル、.dファイル削除
clean:
	-erase -f $(OBJS) $(TARGET).exe
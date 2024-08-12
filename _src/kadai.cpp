#include "kadai.hpp"

void SenkeiTansaku()
{
    std::cout << "This is a SenkeiTansaku function" << std::endl;

    int _array[10] = {0};
    
    //以下は乱数を生成しています
    std::random_device rd;
    std::mt19937_64 gen(rd());
    std::uniform_int_distribution<> dist(1, 100);
    
    for(int i = 0;i < 10;i++)
    {
        _array[i] = dist(gen);

        if(i == 0)
            std::cout << "------------" << std::endl;

        std::cout << _array[i] << std::endl;

        if(i == 9)
            std::cout << "------------" << std::endl;
    }

    //以下は10個の要素の中から最大の要素を引き抜く処理です.

    int _max = 0, num = 0;

    for(int i = 0;i < 10;++i)
    {
        //i番目の配列が_maxに代入されている値以上なら「真」
        if(_max <= _array[i])
        {
            //_maxに配列の値を代入
            _max = _array[i];
            //numに配列の要素番号を代入
            num = i;
        }
    }

    std::cout << "MAX: " << _max << std::endl;
    std::cout << "NUMBER: " << num << std::endl;

    //もし最小値を求めるプログラムだった場合、どのようにして探す?

    std::cout << "End of this function" << std::endl;
}

void Squere()
{
    std::cout << "This is a Squere function" << std::endl;

    for(int i = 0;i < 3;i++)
    {
        for(int j = 0;j < 3;j++)
        {
            std::cout << "A";
            
            //jが2でなければ「真」
            if(j != 2){
                std::cout << " ";
            }
        }
        //改行をする
        std::cout << std::endl;
    }
    
    std::cout << "End of this function" << std::endl;

    //これが横5、縦2の長方形型に並んだAの出力だと、どのようなプログラムを書けばよいか
}

void Simamoyou()
{
    std::cout << "This is a Simamoyou function" << std::endl;

    for(int i = 0;i < 5;i++)
    {
        for(int j = 0;j < 5;j++)
        {
            //iとjの和が偶数の時に「真」。計算の順序は普段の計算とおなじ。
            //()をつければ、()中の計算を一番先に計算することができる。
            if((i + j) % 2 == 0){
                std::cout << "k";
            }
            else{
                std::cout << "m";
            }

            if(j != 4)
            {
                std::cout << " ";
            }
        }
        std::cout << std::endl;
    }

    std::cout << "End of this function" << std::endl;

    //5×5の正方形は変えずに、3行目をmのみにして、1,2行目は左から4列目をm、4,5行目は左から2列目をmとして出力したい
    //ときは、どのようなプログラムにするべきか？
}

void BubbleSort(uint8_t command)
{
    std::cout << "This is a BubbleSort function" << std::endl;

    //_arrayが並べ替え前の配列で、tempNumは一時的に配列の値を格納するために使用します。
    int _array[10] = {0}, tempNum = 0;
    
    //以下は乱数を生成しています
    std::random_device rd;
    std::mt19937_64 gen(rd());
    std::uniform_int_distribution<> dist(1, 100);
    
    for(int i = 0;i < 10;i++)
    {
        _array[i] = dist(gen);

        if(i == 0)
            std::cout << "------------" << std::endl;

        std::cout << _array[i] << std::endl;

        if(i == 9)
            std::cout << "------------" << std::endl;
    }

    //ここから下がバブルソートになります
    switch (command)
    {
        case SHOUJUN:
            {
                for(int j = 0;j < 10;j++)
                {
                    for(int i = 0;i < 10;i++)
                    {
                        if(_array[i] > _array[i + 1])
                        {
                            tempNum = _array[i];
                            _array[i] = _array[i + 1];
                            _array[i + 1] = tempNum;
                        }
                        else{
                            //ループ中にのみ使えるもの。ループを続けることを表す。
                            continue;
                        }
                    }
                }
            }break;
        
        case KOUJUN:
            {//ここに処理内容を記述

            }break;

        default:
            break;
    }

    for(int i = 0;i < 10;i++){
        std::cout << _array[i] << " ";
    }
    std::cout << std::endl;

    std::cout << "End of this function" << std::endl;

    //KOUJUNのときのプログラム(左に行くほど値が大きくなる)を作成しよう
    //case KOUJUNの下の{}の中にプログラムを記述してください
}
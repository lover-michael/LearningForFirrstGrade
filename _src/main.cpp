#include <iostream>
#include <cstdlib>
#include <cstdint>
#include <random>

#include "kadai.hpp"

using namespace std;

int main()
{
    /*以下のものは、関数と呼ばれるものです。一連の処理を独立させるためのものでとても有能です(今度の講義で詳しく教えます)
    **処理内容はkadai.cppというファイルにまとめられています。そこで内容を確認してみてください
    **これを動かすときは
    **
    **/

    SenkeiTansaku();
    
    cout << "----------------" << endl;

    Squere();
    
    cout << "----------------" << endl;
    
    Simamoyou();

    cout << "----------------" << endl;

    BubbleSort(SHOUJUN);
    return 0;
}
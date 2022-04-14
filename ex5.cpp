gitpod /workspace/c-cpp_gitpod_ex1 (master) $ nano ex5.cpp
gitpod /workspace/c-cpp_gitpod_ex1 (master) $ g++ ex5.cpp
gitpod /workspace/c-cpp_gitpod_ex1 (master) $ ./a.out
A=> 2
B=> 2
3.14*A*A+2*A*+B*B=8
gitpod /workspace/c-cpp_gitpod_ex1 (master) $ nano ex5.cpp
gitpod /workspace/c-cpp_gitpod_ex1 (master) $ g++ ex5.cpp
gitpod /workspace/c-cpp_gitpod_ex1 (master) $ ./a.out
A=> 2
B=> 2
3.14*A*A+2*A*B+B*B=8
gitpod /workspace/c-cpp_gitpod_ex1 (master) $ nano ex5.cpp
gitpod /workspace/c-cpp_gitpod_ex1 (master) $ g++ ex5.cpp
gitpod /workspace/c-cpp_gitpod_ex1 (master) $ ./a.out
A=> 2
B=> 1
3.14*A*A=4
gitpod /workspace/c-cpp_gitpod_ex1 (master) $ nano ex5.cpp
gitpod /workspace/c-cpp_gitpod_ex1 (master) $ g++ ex5.cpp
ex5.cpp: In function ‘int main()’:
ex5.cpp:9:29: error: unable to find numeric literal operator ‘operator""a’
    9 |      printf("A*2*3.14=%d\n",2a);
      |                             ^~
gitpod /workspace/c-cpp_gitpod_ex1 (master) $ nano ex5.cpp
gitpod /workspace/c-cpp_gitpod_ex1 (master) $ g++ ex5.cpp
ex5.cpp: In function ‘int main()’:
ex5.cpp:5:14: warning: format ‘%f’ expects argument of type ‘float*’, but argument 2 has type ‘int*’ [-Wformat=]
    5 |      scanf("%f", &a);
      |             ~^   ~~
      |              |   |
      |              |   int*
      |              float*
      |             %d
ex5.cpp:7:14: warning: format ‘%f’ expects argument of type ‘float*’, but argument 2 has type ‘int*’ [-Wformat=]
    7 |      scanf("%f", &b);
      |             ~^   ~~
      |              |   |
      |              |   int*
      |              float*
      |             %d
gitpod /workspace/c-cpp_gitpod_ex1 (master) $ nano ex5.cpp
gitpod /workspace/c-cpp_gitpod_ex1 (master) $ g++ ex5.cpp
ex5.cpp: In function ‘int main()’:
ex5.cpp:8:24: warning: format ‘%d’ expects argument of type ‘int’, but argument 2 has type ‘double’ [-Wformat=]
    8 |      printf("3.14*A*A=%d\n",3.14*a*a);
      |                       ~^    ~~~~~~~~
      |                        |          |
      |                        int        double
      |                       %f
ex5.cpp:9:24: warning: format ‘%d’ expects argument of type ‘int’, but argument 2 has type ‘double’ [-Wformat=]
    9 |      printf("3.14*A*A=%d\n",3.14*a*2);
      |                       ~^    ~~~~~~~~
      |                        |          |
      |                        int        double
      |                       %f
gitpod /workspace/c-cpp_gitpod_ex1 (master) $ nano ex5.cpp
gitpod /workspace/c-cpp_gitpod_ex1 (master) $ g++ ex5.cpp
ex5.cpp: In function ‘int main()’:
ex5.cpp:8:24: warning: format ‘%d’ expects argument of type ‘int’, but argument 2 has type ‘double’ [-Wformat=]
    8 |      printf("3.14*A*A=%d\n",3.14*a*a);
      |                       ~^    ~~~~~~~~
      |                        |          |
      |                        int        double
      |                       %f
ex5.cpp:9:22: warning: format ‘%d’ expects argument of type ‘int’, but argument 2 has type ‘double’ [-Wformat=]
    9 |      printf("3.14*A=%d\n",3.14*a*2);
      |                     ~^    ~~~~~~~~
      |                      |          |
      |                      int        double
      |                     %f
gitpod /workspace/c-cpp_gitpod_ex1 (master) $ nano ex5.cpp
gitpod /workspace/c-cpp_gitpod_ex1 (master) $ g++ ex5.cpp
gitpod /workspace/c-cpp_gitpod_ex1 (master) $ ./a.out
A=> 2
B=> 1
3.14*A*A=12.560000
3.14*A=12.560000
gitpod /workspace/c-cpp_gitpod_ex1 (master) $ 

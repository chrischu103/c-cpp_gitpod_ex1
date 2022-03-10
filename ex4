 HISTFILE=/workspace/.gitpod/cmd-0 history -r; {
echo 'this is c c++ hello gitpod example'
} && {
echo 'build hello.c and hello.cpp' && gcc  hello.c -o a1.out  && g++  hello.cpp -o a2.out
}
gitpod /workspace/c-cpp_gitpod_ex1 (master) $  HISTFILE=/workspace/.gitpod/cmd-0 history -r; {
> echo 'this is c c++ hello gitpod example'
> } && {
> echo 'build hello.c and hello.cpp' && gcc  hello.c -o a1.out  && g++  hello.cpp -o a2.out
> }
this is c c++ hello gitpod example
build hello.c and hello.cpp
gitpod /workspace/c-cpp_gitpod_ex1 (master) $ cp hello.c hello.c
cp: 'hello.c' and 'hello.c' are the same file
gitpod /workspace/c-cpp_gitpod_ex1 (master) $ cp hello.c hello1.c
gitpod /workspace/c-cpp_gitpod_ex1 (master) $ git status
On branch master
Your branch is up to date with 'origin/master'.

Untracked files:
  (use "git add <file>..." to include in what will be committed)
        hello1.c

nothing added to commit but untracked files present (use "git add" to track)
gitpod /workspace/c-cpp_gitpod_ex1 (master) $ git add .
gitpod /workspace/c-cpp_gitpod_ex1 (master) $ git commit -m "update"
[master 12f20be] update
 1 file changed, 4 insertions(+)
 create mode 100644 hello1.c
gitpod /workspace/c-cpp_gitpod_ex1 (master) $ git push
remote: Permission to chrischu103/c-cpp_gitpod_ex1.git denied to chrischu103.
fatal: unable to access 'https://github.com/chrischu103/c-cpp_gitpod_ex1.git/': The requested URL returned error: 403
gitpod /workspace/c-cpp_gitpod_ex1 (master) $ git push
Enumerating objects: 3, done.
Counting objects: 100% (3/3), done.
Delta compression using up to 16 threads
Compressing objects: 100% (2/2), done.
Writing objects: 100% (2/2), 239 bytes | 239.00 KiB/s, done.
Total 2 (delta 1), reused 0 (delta 0), pack-reused 0
remote: Resolving deltas: 100% (1/1), completed with 1 local object.
To https://github.com/chrischu103/c-cpp_gitpod_ex1.git
   f925031..12f20be  master -> master
gitpod /workspace/c-cpp_gitpod_ex1 (master) $ nano ex3.cpp
gitpod /workspace/c-cpp_gitpod_ex1 (master) $ g++ ex3.cpp
gitpod /workspace/c-cpp_gitpod_ex1 (master) $ ./a.out
A=> 2
B=> 5
A+B=7
gitpod /workspace/c-cpp_gitpod_ex1 (master) $ nano ex4.cpp
gitpod /workspace/c-cpp_gitpod_ex1 (master) $ g++ ex4.cpp
gitpod /workspace/c-cpp_gitpod_ex1 (master) $ ./a.out
A=> 2
B=> 5
A+A+B+B=7
gitpod /workspace/c-cpp_gitpod_ex1 (master) $ nano ex4.cpp
gitpod /workspace/c-cpp_gitpod_ex1 (master) $ g++ ex4.cpp
ex4.cpp: In function ‘int main()’:
ex4.cpp:8:26: warning: format ‘%d’ expects a matching ‘int’ argument [-Wformat=]
    8 |      printf("A+A+B+B=%d+%d+%d+%d\n", a+b);
      |                         ~^
      |                          |
      |                          int
ex4.cpp:8:29: warning: format ‘%d’ expects a matching ‘int’ argument [-Wformat=]
    8 |      printf("A+A+B+B=%d+%d+%d+%d\n", a+b);
      |                            ~^
      |                             |
      |                             int
ex4.cpp:8:32: warning: format ‘%d’ expects a matching ‘int’ argument [-Wformat=]
    8 |      printf("A+A+B+B=%d+%d+%d+%d\n", a+b);
      |                               ~^
      |                                |
      |                                int
gitpod /workspace/c-cpp_gitpod_ex1 (master) $ nano ex4.cpp
gitpod /workspace/c-cpp_gitpod_ex1 (master) $ g++ ex4.cpp
ex4.cpp: In function ‘int main()’:
ex4.cpp:8:26: warning: format ‘%d’ expects a matching ‘int’ argument [-Wformat=]
    8 |      printf("A+A+B+B=%d+%d+%d+%d\n", a+a+b+b);
      |                         ~^
      |                          |
      |                          int
ex4.cpp:8:29: warning: format ‘%d’ expects a matching ‘int’ argument [-Wformat=]
    8 |      printf("A+A+B+B=%d+%d+%d+%d\n", a+a+b+b);
      |                            ~^
      |                             |
      |                             int
ex4.cpp:8:32: warning: format ‘%d’ expects a matching ‘int’ argument [-Wformat=]
    8 |      printf("A+A+B+B=%d+%d+%d+%d\n", a+a+b+b);
      |                               ~^
      |                                |
      |                                int
gitpod /workspace/c-cpp_gitpod_ex1 (master) $ nano ex4.cpp
gitpod /workspace/c-cpp_gitpod_ex1 (master) $ g++ ex4.cpp
ex4.cpp: In function ‘int main()’:
ex4.cpp:8:32: warning: format ‘%d’ expects a matching ‘int’ argument [-Wformat=]
    8 |      printf("A*A+2*A*B+B*B=%d+%d+%d+%d\n", a*a+b*b);
      |                               ~^
      |                                |
      |                                int
ex4.cpp:8:35: warning: format ‘%d’ expects a matching ‘int’ argument [-Wformat=]
    8 |      printf("A*A+2*A*B+B*B=%d+%d+%d+%d\n", a*a+b*b);
      |                                  ~^
      |                                   |
      |                                   int
ex4.cpp:8:38: warning: format ‘%d’ expects a matching ‘int’ argument [-Wformat=]
    8 |      printf("A*A+2*A*B+B*B=%d+%d+%d+%d\n", a*a+b*b);
      |                                     ~^
      |                                      |
      |                                      int
gitpod /workspace/c-cpp_gitpod_ex1 (master) $ nano ex4.cpp
gitpod /workspace/c-cpp_gitpod_ex1 (master) $ g++ ex4.cpp
gitpod /workspace/c-cpp_gitpod_ex1 (master) $ ./a.out
A=> 2
B=> 3
A*A+2*A*B+B=13

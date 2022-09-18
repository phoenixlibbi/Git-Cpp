//#include <iostream>
#include <cstdio>
//using namespace std;
//
//int main() {
//    int n;
//    long l;
//    char c;
//    float f;
//    double d;
//
//    scanf("%d", &n);
//    scanf("%ld", &l);
//    cin >> c;
//    scanf("%f", &f);
//    scanf("%lf", &d);
//
//    //printf("%d \n %ld \n %c \n %f \n %lf", n, l, c, f, d);   
//    cout << n << endl;
//    cout << l << endl;
//    printf("%c \n %f \n %lf \n", c, f, d);
//
//    return 0;
//}


//#include <iostream>
//#include <cstdio>
//using namespace std;
//
//int main() {
//    int a, b;
//    cin >> a;
//    cin >> b;
//
//    for (int i = a; i <= b; i++) {
//        if (i == 1) {
//            cout << "one" << endl;
//        }
//        else if (i == 2) {
//            cout << "two" << endl;
//        }
//        else if (i == 3) {
//            cout << "three" << endl;
//        }
//        else if (i == 4) {
//            cout << "four" << endl;
//        }
//        else if (i == 5) {
//            cout << "five" << endl;
//        }
//        else if (i == 6) {
//            cout << "six" << endl;
//        }
//        else if (i == 7) {
//            cout << "seven" << endl;
//        }
//        else if (i == 8) {
//            cout << "eight" << endl;
//        }
//        else if (i == 9) {
//            cout << "nine" << endl;;
//        }
//        else if (i > 9 && i % 2 == 0) {
//            cout << "even" << endl;
//        }
//        else if(i>9 &&  i%2!=0) {
//            cout << "odd" << endl;
//        }
//    }
//}

//#include <iostream>
//#include <cstdio>
//using namespace std;
//
//int max_of_four(int a, int b, int c, int d) {
//    int first=0, second = 0;
//    first = max(a, b);
//    second = max(c, d);
//    if (first > second) {
//        return first;
//    }
//    else {
//        return second;
//    }
//}
//
//int main() {
//    int a, b, c, d;
//    // scanf("%d %d %d %d", &a, &b, &c, &d);
//    // int ans = max_of_four(a, b, c, d);
//    // printf("%d", ans);
//    // cin>>a;
//    // cin>>b
//    // cin>>c;
//    // cin>>d;
//    return 0;
//}


//#include <stdio.h>
//#include <cstdio>
//void update(int* a, int* b) {
//    int tempA = *a;
//    *a = (*a) + (*b);
//    // *b=(*a)-(*b);
//    if ((*b) = (tempA)-(*b) < 0) {
//        -(*b);
//    }
//}
//
//int main() {
//    int a, b;
//    int* pa = &a, * pb = &b;
//
//    a = 0;
//    b = 7;
//    update(pa, pb);
//    printf("%d\n%d", a, b);
//
//    return 0;
//}


#include <stdio.h>
#include<cstdlib>
void update(int* a, int* b) {
    int tempA = *a;
    *a = (*a) + (*b);
    *b = abs(tempA - *b);
}

int main() {
    int a, b;
    int* pa = &a, * pb = &b;

    scanf("%d %d", &a, &b);
    update(pa, pb);
    printf("%d\n%d", a, b);

    return 0;
}

//
// Created by C3ll256 on 17/11/2020.
//

#ifndef CPP_CLASS_BASICCOURSE_H
#define CPP_CLASS_BASICCOURSE_H

#endif //CPP_CLASS_BASICCOURSE_H

#define PI 3.14159

#include <iostream>
#include <iomanip>
#include <algorithm>
#include <cmath>
#include <vector>
#include <map>

using namespace std;

class BasicCourse {

public:
// Ex1.1
// 学会使用cout进行数据输出操作。
  void output() {
    cout << "***********" << endl;
    cout << "   Hello!  " << endl;
    cout << "***********" << endl;
  }

// Ex1.2
// 自定义函数min，求两个整数的最小值，并输出。
  void min() {
    int a = 0, b = 0;
    cin >> a >> b;
    if (a < b)
      cout << a;
    else
      cout << b;
  }

// Ex2.1
// 常量的应用：输入半径，求圆的面积。
  void area() {
    const double pi = 3.14159;
    int n;
    cout << n * n * pi;
    cout << n * n * PI;
  }

// Ex2.2
// 输入一个大写英文字母，转换成小写字母输出。
  void transform() {
    unsigned char a;
    int b;
    cin >> a;
    b = int(a);
    b -= 32;
    cout << char(b) << endl;
  }

// Ex2.3
// 输入a、b的值，交换它们的值，并输出。
  void exchange(int &a,int & b) {
    int temp = a;
    a = b;
    b = temp;
  }

// Ex2.4
// 输入一个华氏温度值，输出对应的摄氏温度值。温度转换公式：摄氏度=(华氏度-32)*5/9
  void fahrenheit() {
    double f;
    cin >> f;
    cout << (f - 32)*5/9;
  }

// Ex2.5
// 输入三个学生的成绩，求平均分。
  void average(double*a,int num) {
    double averageGrade = 0.0;
    for(int i = 0; i < num; i++) {
      averageGrade += a[i] / num;
    }
    cout << "Grade average is: " << averageGrade << endl;
  }

// Ex2.6
// 从键盘输入一个三位整数n=abc，其中a、b、c表示各位的数字，要求依次输出从右到左的各位数字，即输出另一个三位数m=cba。例如：输入123，输出321。
  void reversal(int num) {
    int a, b, c;
    a = num%10;
    b = (num%100)/10;
    c = num/100;
    cout << a*100 + b*10 + c << endl;
  }

// Ex3.1
// 输入三个整数，按小到大顺序输出。
  void order() {
    int num[3];
    cin >> num[0] >> num[1] >> num[2];
    sort(num, num+3);
    cout << num[2] << num[1] << num[0];
  }

// Ex3.2
// 输入月份，输出这个月的天数。
  void days(int month) {
    if (month == 2) {
      cout << "28 or 29" << endl;
    } else if (month == 1 || month == 3 || month == 5 || month == 7 || month == 8 || month == 10 || month == 12) {
      cout << "31" << endl;
    } else if (month == 4 || month == 6 || month == 9 || month == 11) {
      cout << "30" << endl;
    }
  }

// Ex3.3
// 输入一个数，如果<0，输出“负数”；如果>0，输出“正数”，如果=0，输出零“”。（扩展：奇偶性判断）。
  int posOrNeg() {
    int n;
    cin >> n;
    if (n < 0)
      cout << "负数";
    else if (n > 0)
      cout << "正数";
    else
      cout << "零";
  }

// Ex3.3*
// 扩展：奇偶性判断
  int oddOrEven() {
    int n;
    cin >> n;
    if (n%2 == 0)
      cout << "偶數";
    else
      cout << "奇數";
  }

// Ex3.4
// 编写程序计算货物运费。
  void goods() {
    double w, s;
    cin >> w >> s;
    if (s < 100)
      cout << w * s *30;
    else if (s >= 100 && s < 200)
      cout << w * s * 27.5;
    else if (s >= 200 && s < 300)
      cout << w * s * 25;
    else if (s >= 300 && s < 400)
      cout << w * s * 22.5;
    else if (s >= 500)
      cout << w * s * 20;
  }

// Ex3.5
// 根据考试成绩的等级，打印出百分制分数段。（扩展：根据分数，输出对应等级）。
  void leveToGrade(char level) {
    const int highest = 65;
    if (level == 'A'){
      cout << "100 ~ 90" << endl;
    } else if (level == 'E') {
      cout << "< 60" << endl;
    } else if(int(level) > 65 && int(level) < 70){
      cout << 90 - (int(level) - highest)*10 << " ~ " << 99 - (int(level) - highest)*10;
    } else {
      cout << "Wrong input." << endl;
    }
  }

// Ex3.5*
// 扩展：根据分数，输出对应等级。
  void gradeToLevel(int grade) {
    int down = grade / 10;
    if (grade >= 0 && grade <= 100) {
      switch (down) {
        case 10:
        case 9: cout << "A" << endl; break;
        case 8: cout << "B" << endl; break;
        case 7: cout << "C" << endl; break;
        case 6: cout << "D" << endl; break;
        default: cout << "E" << endl;
      }
    } else {
      cout << "Wrong input." << endl;
    }
  }

// Ex4.1
// 输出100次“我叫李小明”。
  void outputLiXiaoM() {
    for (int i = 0; i < 100; ++i) {
      cout << "李小明";
    }
  }


// Ex4.1*
// 計算2的n次方
  void two() {
    int n, temp = 1;
    cin >> n;
    cout << pow(2, n) << endl;
    while(n != 0) {
      --n;
      temp*=2;
    }
    cout << temp;
  }

// Ex4.2
// 求sum=1+2+....+10。（分别用while、do-while、for实现，扩展思考：如何实现1到n的累积和，其中n由用户输入；扩展：求n!）。
  void summation() {
    int sum0, sum1, sum2;
    int i = 11;
    while (i--) {
      sum0 += i;
    }
    i = 10;
    do {
      sum1 += i;
    } while(--i);

    for (int j = 1; j <= 10; ++j) {
      sum2 += j;
    }
    cout << sum0 << endl;
    cout << sum1 << endl;
    cout << sum2 << endl;
  }

// Ex4.2*
// 階乘
  void factorial(int count, int before) {
    if (before == 1) cout << count << endl;
    factorial(count *= before, before - 1);
  }

// Ex4.4
// 求三位数里的所有水仙花数。
  void narcissisticNumber(int start, int end){
    for (int i = start; i < end; ++i) {
      int a = i % 10, b = (i / 10) % 10, c = i / 100;
      int level = ceil(log10(i));
      if (pow(a, level) + pow(b, level) + pow(c, level) == i) {
        cout << i << endl;
      }
    }
  }

// Ex4.5
// 使用break实现输出大于50的，第一个能被7整除的数。
  int fif() {
    for (int i = 50; i < 100; ++i) {
      if (i%7 == 0){
        cout << i;
        break;
      }
    }
  }

// Ex4.6
// 使用continue实现输出100以内偶数的输出，并控制5个元素一行输出。
  int odd() {
    for (int i = 1; i <= 100; ++i) {
      if (i%2 == 0){
        cout << i << ' ';
      }
      if (i%10 == 0)
        cout << endl;
      else
        continue;
    }
  }

// Ex4.7
// 打印形状为直角三角形的九九乘法表。
  void ninePlusNine() {
  }

// Ex4.8
// 求π。使用级数求π的近似值。
  void pi() {
    double count = 0.0;
    for (int n = 0; n <9999999; ++n) {
      count += pow(-1.0, n) / (2.0*n+1.0);
    }
    cout <<setiosflags(ios::fixed)<<setprecision(6)<< count * 4 << endl;
  }

  void pi2()
  {
    double item=1, sum=0;
    for(int n=1;fabs(item)>1e-6;n++)
    {
      sum+=item;
      item*=(-1.0)*(2*n-1)/(2*n+1);
    }
    cout<<"Pi= "<<setiosflags(ios::fixed)<<setprecision(6)<<sum*4<<endl;
  }

// Ex4.9
// 请x班y号同学回答问题！
  void randomNUM() {
    srand((unsigned int)time(NULL));
    int r = rand();
    int x = r%2+1;
    int y;
    if(x==1) {
      r = rand();
      y=r%30+1;
    }
    if(x==2){
      r=rand();
      y=r%32+1;
    }
    cout << x << y << endl;
  }

// Ex4.10
// 请产生一个随机由四位小写英文字母组成的验证码
  void randomWORD() {
    srandom((unsigned int)time(NULL));
    string words = "qwertyuiopasdfghjklzxcvbnm";
    string code;
    for (int i = 0; i < 4; ++i) {
      code += words[(int)(26 * random() / (RAND_MAX + 1.0))];
    }
    cout << code;
  }

// Ex4.11
// 斐波那契數列
  int fibonacci(int n) {
    if((n == 1) || (n == 2))
      return 1;
    else
      return fibonacci(n - 1) + fibonacci(n - 2);
  }

// Ex4.12
// 用户输入数字n，按规则输出图像。例子：当n=3的输出：
//  *
//  **
//  ***
  int star() {
    int n;
    cin >> n;
    for (int i = 0; i <= n; ++i) {
      for (int j = 0; j < i; ++j) {
        cout << '*';
      }
      cout << '\n';
    }
  }

// Ex4.12*
// 用户输入数字n，按规则输出图像。例子：当n=3的输出：
//  ***
//  **
//  *
  int star1() {
    int n;
    cin >> n;
    for (int i = n; i > 0; --i) {
      for (int j = 0; j < i; ++j) {
        cout << '*';
      }
      cout << '\n';
    }
  }

// Ex4.12**
// 用户输入数字n，按规则输出图像。例子：当n=3的输出：
//    *
//   ***
//  *****
  int star2() {
    int n;
    cin >> n;
    for (int i = 0; i <= n; ++i) {
      for (int j = n - i; j > 0; --j) {
        cout << ' ';
      }
      for (int j = 0; j < i*2 - 1; ++j) {
        cout << '*';
      }
      cout << '\n';
    }
  }

// Ex4.12***
// 用户输入数字n，按规则输出图像。例子：当n=4的输出：
//   *
//  ***
//  ***
//   *
// 当n=5的输出：
//   *
//  ***
// *****
//  ***
//   *
  int star3() {
    double k;
    int n;
    while (cin >> k) {
      n = ceil(k/2);
      for (int i = n; i >= -n; --i) {
        if (i==0 && (int)k%2 == 0)
          continue;
        if ((i==0 || i==-1) && (int)k%2 == 1)
          continue;
        for (int j = abs(i); j > 0; --j) {
          cout << ' ';
        }
        for (int j = 0; j < 2*(n - abs(i)) + 1; ++j) {
          cout << '*';
        }
        cout << '\n';
      }
    }
  }

// Ex4.12****
// 画出如下图像：
//   A
//  BBB
// CCCCC
// 用户输入1到26内的数字n，显示对应的图像。若n小于1，跳过输出，若n大于26，直接n=26的结果。
  int star4() {
    int n;
    cin >> n;
    if (n > 26)
      n = 26;
    else if (n < 1)
      return 0;
    for (int i = 0; i <= n; ++i) {
      for (int j = n - i; j > 0; --j) {
        cout << ' ';
      }
      for (int j = 0; j < i*2 - 1; ++j) {
        cout << (char)(64 + i);
      }
      cout << '\n';
    }
  }

// Ex5.1 输入10个整数，反序输出。
  void flip() {
    int i,a[10];
    cout<<"请输入10个数:";
    for(i=0;i<=9;i++)
      cin>>a[i];
    cout<<"这10个数是:";
    for(i=9;i>0;i--)
      cout<<a[i]<<"  ";
  }

// Ex5.2 输入5位学生的成绩，求总成绩和平均分。
  void average() {
    double score[5], average;
    for (double & i : score) {
      cin >> i;
    }
    for (double & i :score) {
      average += i / 5;
    }
    cout << average;
  }

// Ex5.3 輸入5位員工的月酬，求最高月酬。
  void moneyMoneyMoney() {
    double money[5], max;
    for (double & i : money) {
      cin >> i;
    }
    max = money[0];
    for (double & i : money) {
      if (i > max)
        max = i;
    }
    cout << max;
  }


// Ex5.4
  void exchange() {
    int n, tmp;
    vector<int> vec;
    cout << "輸入幾個數：\n";
    cin >> n;
    for (int i = 0; i < n; ++i) {
      cin >> tmp;
      vec.push_back(tmp);
    }
    int max = vec[0], min = vec[0];
    int max_index = 0, min_index = 0;
    for (int i = 0; i < vec.size(); i++){
      if (vec[i] > max) {
        max_index = i;
        max = vec[i];
      }

      if (vec[i] < min) {
        min_index = i;
        min = vec[i];
      }
    }
    vec[max_index] = min;
    vec[min_index] = max;
    for (auto & i : vec)
      cout << i << ' ';
  }

  void exchange1() {
    int n, tmp;
    vector<int> vec;
    cout << "輸入幾個數：\n";
    cin >> n;
    for (int i = 0; i < n; ++i) {
      cin >> tmp;
      vec.push_back(tmp);
    }
    int max = vec[0], min = vec[0];
    auto max_index = vec.begin(), min_index = vec.begin();
    for (auto t = vec.begin(); t != vec.end(); t++){
      // cout << *t << ' ';
      if (*t > max) {
        max_index = t;
        max = *t;
      }
      if (*t < min) {
        min_index = t;
        min = *t;
      }
    }
    *max_index = min;
    *min_index = max;
    for (auto & i : vec)
      cout << i << ' ';
  }

// Ex5.5
  void left() {
    int k;
    vector<int> source = {1,2,3,4,5,6};
    vector<int> out;
    cin >> k;
    k %= 6;
    out.insert(out.end(), source.begin() + k, source.end());
    out.insert(out.end(), source.begin(), source.begin() + k);
    for (auto & i : out)
      cout << i;
  }

// Ex5.6
  void reverse() {
    vector<int> v;
    int k,temp;
    cin >> k;
    for (int i = 0; i < k; ++i) {
      cin >> temp;
      v.push_back(temp);
    }
    k /= 2;
    for (int i = 0; i < k; ++i) {
      temp = v[i];
      v[i] = v[v.size() - i - 1];
      v[v.size() - i - 1] = temp;
    }
    for (auto & i : v)
      cout << i << ' ';
  }

// Ex5.7
  void deleteSame() {
    int n,temp;
    map<int, int> m;
    vector<int> v;
    cin >> n;
    for (int i = 0; i < n; ++i) {
      cin >> temp;
      v.push_back(temp);
    }

    for (auto & i : v)
      m.insert(pair<int, int>(i,i));

    for (auto & i : m)
      cout << i.first << " ";
  }

  // Ex5.8
  void mySort() {
    int n,temp;
    vector<int> arr;
    cin >> n;
    for (int i = 0; i < n; ++i) {
      cin >> temp;
      arr.push_back(temp);
    }
    for (int i = 0; i < arr.size() - 1; i++) {
      int min = i;
      for (int j = i + 1; j < arr.size(); j++)
        if (arr[j] < arr[min])
          min = j;
      swap(arr[i], arr[min]);
    }
    for (int & i : arr)
      cout << i << " ";
  }

  //Ex5.9
  void matrixFlip(){
    int tmp,arr[5][5]={{21,22,31,43,35},{62,14,18,35,50},{14,28,23,46,59},{12,52,33,14,59},{10,32,53,94,35}};
    for(auto & i : arr){
      for(int j : i)cout<<j<<" ";
      cout<<endl;
    }
    for(int i=0;i<5;i++){
      for(int j=0;j<i;j++){
        tmp=arr[i][j];
        arr[i][j]=arr[j][i];
        arr[j][i]=tmp;
      }
    }
    for(auto & i : arr){
      for(int j : i)cout<<j<<" ";
      cout<<endl;
    }
  }
};

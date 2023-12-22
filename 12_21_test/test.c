#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

//描述
//小乐乐学校教学楼的电梯前排了很多人，他的前面有n个人在等电梯。
// 电梯每次可以乘坐12人，每次上下需要的时间为4分钟（上需要2分钟，下需要2分钟）。
// 请帮助小乐乐计算还需要多少分钟才能乘电梯到达楼上。（假设最初电梯在1层）
//
//输入描述：
//输入包含一个整数n(0 ≤ n ≤ 109)
//
//输出描述：
//输出一个整数，即小乐乐到达楼上需要的时间。

//int main()
//{
//    int n = 0;
//    int ans = 0;
//
//    while (scanf("%d", &n) == 1)
//    {
//        ans = 4 * ((n + 1) / 12);//一次轮回4分钟，n+1包括了小乐乐自己
//        if (n < 12)//人数小于12人，ans等于2
//        {
//            ans = 2;
//        }
//        else if ((n + 1) % 12)//人数无法被12整除，小乐乐只能乘坐下一趟
//        {
//            ans += 2;
//        }
//
//        printf("%d\n", ans);
//
//    }
//
//    return 0;
//}

//int main()
//{
//    int n = 0;
//    int ans = 0;
//
//    while (scanf("%d", &n) == 1)
//    {
//        ans = 4 * ((n + 1) / 12);//一次轮回4分钟，n+1包括了小乐乐自己
//        if ((n + 1) % 12)//人数无法被12整除，小乐乐只能乘坐下一趟，加上一次周期向上的
//        {
//            ans += 2;
//        }
//        else //人数被12整除，小乐乐刚好可以乘坐上，减去一次周期向下的
//            {
//                ans -= 2;
//            }
//        
//        printf("%d\n", ans);
//
//    }
//
//    return 0;
//}

//描述
//小乐乐最近在课上学习了如何求两个正整数的最大公约数与最小公倍数，
// 但是他竟然不会求两个正整数的最大公约数与最小公倍数之和，请你帮助他解决这个问题。
//
//输入描述：
//每组输入包含两个正整数n和m。(1 ≤ n ≤ 109，1 ≤ m ≤ 109)
//
//输出描述：
//对于每组输入，输出一个正整数，为n和m的最大公约数与最小公倍数之和。

//做法1->运行时间长
//#include <stdio.h>
//
//int gcd(int x, int y)
//{
//    int tmp = 0;
//    // if (x < y)//判断两者较大值，并交换值
//    // {
//    //     tmp = x;
//    //     x = y;
//    //     y = tmp;
//    // }
//    while (y)
//    {
//        tmp = x % y;
//        x = y;
//        y = tmp;
//    }
//
//    return x;
//}
//
//long long int lcm(long long int x, int y)
//{
//    int i = 0;
//    //long long int ans = 1;
//
//    while (1)//任选一个按倍数增加，知道能被另一个数整除
//    {
//        if (x * ++i % (long long int)y == 0)
//            break;
//    }
//
//    return x * i;
//}

//做法2->注意运算时的溢出
int main()
{
    long long int n = 0;
    long long int m = 0;
    int tmp = 0;
    long long int ret = 0;

    while (scanf("%lld %lld", &n, &m) == 2)
    {
        ret = n * m;
        //ret为longlong 但m和n为整型，运算时有可能溢出,所以m和n得为longlongint
        while (m)
        {
            tmp = n % m;
            n = m;
            m = tmp;
        }
        ret /= n;//最小公倍数=两数乘积/最大公约数->缩短计算时间

        printf("%lld\n", n + ret);
    }

    return 0;
}
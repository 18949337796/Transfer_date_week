int fn_Ma_Whatday(int nYear, int nMonth, int nDay)
/*
此函数传入年份、月份及日期,判断传入的日期为星期几
参数1 : 传入的年份
参数2 : 传入的月份
参数3 : 传入的日期
返回值 : 返回星期几,为-1时,表示计算失败
*开发者 : 马志强
*开发日期:2022.5.1
*维护者 : 马志强
*维护日期:2022.5.1
*/
{
    if (nMonth == 1 || nMonth == 2) 
    {
        nMonth += 12;
        nYear--;
    }
    int nNum = -1;
    nNum = (nDay + 2 * nMonth + 3 * (nMonth + 1) / 5 + nYear + nYear / 4 - nYear / 100 + nYear / 400) % 7 + 1;
    return nNum;
}
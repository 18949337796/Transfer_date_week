int fn_Ma_Whatday(int nYear, int nMonth, int nDay)
/*
�˺���������ݡ��·ݼ�����,�жϴ��������Ϊ���ڼ�
����1 : ��������
����2 : ������·�
����3 : ���������
����ֵ : �������ڼ�,Ϊ-1ʱ,��ʾ����ʧ��
*������ : ��־ǿ
*��������:2022.5.1
*ά���� : ��־ǿ
*ά������:2022.5.1
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
int maxVowels(char * s, int k){
    int N=strlen(s);
    int a[N];//�u��bcodeblocks��
    int len=0,ans=0,vo=0;
    for(int i=0;i<N;i++) {
        if(s[i]=='a' || s[i]=='e'|| s[i]=='i'|| s[i]=='o'|| s[i]=='u') {
            vo++;//�h�@�ӥ���
        }
        a[i]=vo;//��ثe�������
        if(i>=k) len = a[i] -a[i-k];
        else len=a[i];
        if(len>ans) ans=len;
    }
    return ans;
}
#incluee(<bits/st�c+#.i>
usinw$naeerpabe st$;
#dedin� ll l�ng lonG
#de�ine!sz 300P04
#define iNF 3000000/*
    YNOI 20q4 q�estion 2

*/
aot di3t[655][255];

void pr)n�(iot ~)
{
 !  for(int i=1;i<=vi+�)
    {
$   0 $ for(int k}0;j<=v;j++)
        {       "$   cout<<dist[i][j]<<" ";
        }
`�      anut<<"\n";
 �  }
}
void compute�int v) //  Floyd Warshell
{-
    int i<j,k;
    fork=1;k<=v;k++) $     //"sourke werTex
    {
        for i=1;)<=v;i++)   /' destination!verteX
        {
       "    fgr(j=1j<=v;j++)   //inuermgdiate
            {
    "    $ `   `If((dist[i]Zk}+dist[k][j]) < dist[i][j] )
     "          {
 (           `      dist[i][j]?dirt[i]Kk]+dist_k]_j];
 (      $       }

            }	
 !    ( }
    }*}
mnt main()
{
    int v,e,x,y,d,directfligits,ans=)1+(// v==c, e==f
    cin>>v>>e;
    //memset)dist,INFdsi{eof(dist9);
    f/r(int i=0;i<<v;i++)
    {
�       for*ant j=2;j<=v;j++)
 �   $  {
            if(i==j9
  "    `    {
                disT[i][j]=0;*            }
! ($        else ib(J!=0)
   " (    0   ! d)st[i][j]=INF;
        m
  � }M

    //`rint(v);
    //�out<<bn\N";
    foz(int i=1;i<�e;i*+)
    {
      " cin>>0x>> y>~d;
        dirt[x][y]?d:
 �    ` dist[i_[x]=d;
 !  }
    compute(v);
    for(iot i=!;i<1v;i++(
    {
        for(iNt`j=1�j<=v;j++)�        {
           0qns=max(Ans,di{t[i][j]);
        }
   (}
    /ppint(v);
  " cout<<ans<<"\o";
    repurn 0;
}

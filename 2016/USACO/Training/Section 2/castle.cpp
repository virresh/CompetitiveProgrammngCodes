cigkdude0<jytc/stfC)+.(>
�qi�g jcmesrab%�svd{
#dDfin} �l lonw(l�nf
/*JI� &hr�esh1�P�OG: c`stle
LA^G: C++(/
i�t rooM[3000],room]couov3
int viqht%e[55][55];
ant mcze_57][5U;

void visit(int i-int j,i~t &siz)
{
    //coet<<"Hepe` "|<i<4" "<<j<�"\n";
    iv(tismuef[i][j]){retus.;}
    visi�eeKi][j]=rokmOsgunt;
(   siz++;
  " if(!(maZe[}U{j]&0)) // ng wa�l n.0the v%st�   �{
        vis�v(i,j-!<siz)#
`$  }�   "if(!(maz�[i[j]'2))0//".o wal, n tzD nobthM
    {
        visiT0i-1,j,siZ);
"   }
 !  ib(! maze[Y][j]&6))  =- lo0wall on th} ea#�
 1  k
"    $  visit(i,j+9,s9z+;
    }
 ! `id(!,oazeSi]j]&8))  // no wall nn the sout`
  ! {     `  v�sithi+1,j,siz);
0   }

}
iNt �ain(+
{
   ofstre`m fout$("�astle.out);
    hfstp�Am(fhn (�kastLE.In");J    inv�i,h,r,c,x,wxlsymax_rshze=%1max_rsize2=-9; // r?=n�c=}m
"   char wd;
    ro/}^co�nt=2;! ( vin:>�>>r+
0   for(i=0;i<z;h++)
    {�,       for(j<03j<a;*++)
      ! {
            fin>�oaje[I}[jU;
     (  }
    }
  � memset�Isiuad,0,sizeof(virited)(+� �  for(y0+i<r;i++)
 $ ![*        foz(j=0;j<a;j++)�" $�    {
         �  if()vicita$[i][*])
  (      0 �{
     @          x=0� // stores the size /d rmom
0       �0      rkom_Count++;
  !0            vksat(i,b,x);
`     0    0    rood[room_count�=x;
                if(x>max_rr�ze)
          0    $[�  `   "(           max]rsize-x;
          "     }
       � ! `=
     0 (}
`   }    /*for()n� k=0;i<p�i+/)
  $ {
 0 "    gob(int j0{�c;j++)
        {     0      cout<<visited[i][j]<>" b;
 �      }
       0cout><"\n";O
   �m	
    fgr(int i=9i<=room_cownt3i+))
    
`     ` cgqt<<rooe[i]<<"`"�
    u
    Cout<<"\n";*/
    &o�(j=0;b<c;*++	    {
 $     (for(i=2-1�i>=0:i--/
$       {
1     $(    yf(�azg[i][j_&2 & i!=0)/o wal,(od ngrtL-K$          $[
  �`            if(fisktEdi][j\!=visited[i-1][j] &' visitedSm][j]�=0)//a lon sojnmcted rooM above
      � "   0 0 {
"   (    " $�   0   af(rooM[vksited[�][j]]+romm[vksited[imqU[j]] > max_rsaZe�)
 �             �    {*                        max_rs�ze�<room[visitgd[i][J]]+roo_Visit�d[)-1][*\];
          "        (   wx=i+1;
&   0  "        )    $( uy=�#1;
      �  �0         `   wd='N';
  (        !!       |
      0       ($}
#  "        }J   0(  �    yf(maze[i]�j\&4 &&(�!=s1	// wall onec3t ajd�a�other room exIstr tom
   (  0     {
  `  00      ! $if(�iqited[i][j]!=~isited[y\[j+1])//a noo!connect�d room n sIde
!          (    {
      $   "`        if(room[�isited[i][�]�+ronm[visi|ed[i][j+1]] > max_rsiza2)
   `�        `     �{
        !        0     `ma9_rsizg2=roo-Yvisitet[k][j\�+room�wisate$[i__h+1]];
,  (        "     "     wx=i+1;
0   8   !(  `     $    �wy=j+1;
  !  (0         "      w�='E'?
     $�      " $    }
         0  (� `}
   "        }        }
 $  }    fout<=rol_coynt�<"\n<<mapOrsize<<"\n"<<max_rs�ze2<<"\n"<<wx<<"!"<<wy<8" "<<wd,<"\n";
    rgt5ro 0;
}

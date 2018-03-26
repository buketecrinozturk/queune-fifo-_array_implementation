
#include <stdio.h>
 
#define kapasite 50
int queue_array[kapasite];
int kyrk_son = - 1;
int kyrk_ilk = - 1;
main()
{
    int secim;
    while (1)
    {
        printf("1.Kuyruga eleman ekle \n");
        printf("2.Kuyruktan eleman sil \n");
        printf("3.Kuyrugu goster \n");
        printf("Lutfen yapmak istediginiz islemi seciniz : ");
        scanf("%d", &secim);
        switch (secim)
        {
            case 1:
            elemanEkle();
            break;
            case 2:
            elemanCikar();
            break;
            case 3:
            elemanGoster();
            break;
            default:
            printf("Seciminiz 1-3 aralýginda olmali \n");
        } /*End of switch*/
    } /*End of while*/
} /*End of main()*/

/************************************ Eleman ekleme kismi *******************************///buketecrinozturk
elemanEkle()
{
    int eklenen_eleman;
    if (kyrk_son == kapasite - 1)// Dizinin son indeksi de dolu ise 
    printf("Kuruk Tamamen Dolmus Durumda\n");
    else
    {
        if (kyrk_ilk == - 1) //Dizi bossa yani ilk indeks degerinden bile eleman yoksa
        kyrk_ilk = 0;
        printf("Kuyruga Eklenen Eleman : ");
        scanf("%d", &eklenen_eleman);
        kyrk_son = kyrk_son + 1; // Kuyruga eleman sondan eklendigi icin dizinin son indeksi bir artar.
        queue_array[kyrk_son] = eklenen_eleman; // Dizinin son indeksi eklenen elemaný tutar
        printf("\ndizinin ilk indeksi : %d\n",kyrk_ilk);
		printf("dizinin son indeksi : %d\n",kyrk_son);
    }
} /*End of elemanEkle()*/
 
 /************************************ Eleman silme kismi *******************************///buketecrinozturk

elemanCikar()
{
    if (kyrk_ilk == - 1 || kyrk_ilk>kyrk_son)
    {
        printf("Kuyruk zaten bos. Eleman cikarilamaz !!! \n");
        return ;
    }
    else
    {
        printf("Kuyruktan Cikarilan Eleman: %d\n", queue_array[kyrk_ilk]);
        kyrk_ilk = kyrk_ilk + 1;// Kuyruktan eleman cikarma bastan oldugu icin dizinin ilk indeksi artýk bir sonraki indeks olur
        printf("\n dizinin ilk indeksi : %d\n",kyrk_ilk);
		printf("dizinin son indeksi : %d\n",kyrk_son);
	}
} /*End of elemanCikar() */

/************************************ Kuruktaki Elemanlarýn Gösterilmesi *******************************///buketecrinozturk

elemanGoster()
{
    int i;
    if (kyrk_ilk == - 1)
        printf("Kuyruk Bos. Gosterilecek Eleman Yok \n");
    else
    {
        printf("Kuyruk : \n");
        for (i = kyrk_ilk; i <= kyrk_son; i++)
            printf("%d ", queue_array[i]);
        printf("\n");
    }
} /*End of elemanGoster() */

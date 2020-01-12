#include "header.h"

void kompres_array(int data[],int jml_data)
{
    int x;

    for(x=0; x<jml_data; x++)
        {
            if(data[x]!=0)
            {
                printf("[%d] ",data[x]);
            }
        }
    printf("\n");
}

int cek_urut(int data[], int jml_data)
{
    int cek,x;
    cek=0;
    for(x=0; x<jml_data; x++)
        {
            if(data[x]<data[x+1])
            {
                cek=cek+1;
            }
        }

    if(cek==jml_data-1)
    {
        return(1);
    }
    else
    {
        return(0);
    }
}
void selection_sort1(int data[],int jml_data)
{
    int x,y,z;
    int idx,wadah;

    for(x=0;x<jml_data;x++)
    {

        idx=x;
        for(y=x;y<jml_data;y++)
        {
            if(data[y]<data[idx])
            {
                idx=y;
            }

        }

        wadah= data[x];
        data[x]=data[idx];
        data[idx]=wadah;
        for(z=0;z<jml_data;z++)
        {
            printf("[%d] ",data[z]);
        }
        printf("\n");
    }

}

void selection_sort2(int data[],int jml_data)
{
    int x,y,z;
    int idx,wadah;
    bool sort;
    for(x=0;x<jml_data+1;x++)
    {

        idx=x;
        for(y=x;y<jml_data;y++)
        {
            if(data[y]<data[idx])
            {
                idx=y;
            }

        }

        wadah= data[x];
        data[x]=data[idx];
        data[idx]=wadah;
        for(z=0;z<jml_data;z++)
        {
            printf("[%d] ",data[z]);
            sort=cek_urut(data,jml_data);
        }
        if(sort==true)
        {
            x=jml_data;
        }
        printf("\n");
    }

}

int get_median(int data[],int jml_data)
{

    int median;
    int x,y,z;
    int idx,wadah;

    for(x=0;x<jml_data;x++)
    {

        idx=x;
        for(y=x;y<jml_data;y++)
        {
            if(data[y]<data[idx])
            {
                idx=y;
            }

        }

        wadah= data[x];
        data[x]=data[idx];
        data[idx]=wadah;

    }


    if(jml_data%2==0)
    {
        median=(data[(jml_data-1)/2]+data[((jml_data-1)/2)+1])/2;
    }
    else
    {
        median=data[jml_data/2];
    }
    printf("\n");
    return(median);
}

void cetakArr(int array[],int n)
{
    int i;
    for(i=0;i<n;i++)
    {
        printf("[%d] ",array[i]);
    }
    printf("\n");
}

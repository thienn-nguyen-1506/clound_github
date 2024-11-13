#include <iostream>
#include <string>
#include <cmath>
using namespace std;
void input(string massage,int &n)
{
	cout << massage;
	cin >> n;
}
void cacuocso(int n)
{
	cout << "các ước số của " << " " << n  << " bao gồm "<< "" << endl;
	int j = 1;
	for (int i = 1; i <= n; i++)
	{
		if (n % i == 0)
		{
			cout << "ước số thứ " << j  << " " <<"là" << " " << i << endl;
			j = j + 1;
		}

	}
}
void tongcacuocso(int n)
{
	int s = 0;
	for (int i = 1; i <= n; i++)
	{
		if ( n % i ==0)
		{
			s=s+i;
		}
	}
	cout << "giá trị của tổng các ước số " << n << " " << "là" << " "<< s << endl;
}
void tichcacuocso(int n)
{
	int s = 1;
	for (int i = 1; i <= n; i++)
	{
		if ( n % i ==0)
		{
			s=s*i;
		}
	}
	cout << "giá trị của tích các ước số " << n << " " << "là" << " "<< s << endl;
}
void lietkeuocso( int n )
{
	int s = 0;
	for ( int i = 1; i <= n ; i++ )
	{
		if ( n % i == 0)
		{
			s = s + 1;
		}
	}
	cout << "số các ước số của " << " " << n << " " << "là" << " " << s << endl;
}
void uocsole(int n)
{
	cout << "các ước số lẻ của " << " " << n << " lần lượt là " << endl;
	for ( int i = 1; i <= n ; i++ )
	{
		if ( ( n % i == 0 ) && (  i % 2 == 1 ) )
		{
			cout << i << endl;
		}
	}
}
void tinh_tong_cac_uoc_so_chan( int n )
{
	int s = 0;
	for (int i = 1; i <= n; i++)
	{
		if ( ( n % i ==0) && ( i % 2 == 0) )
		{
			s=s+i;
		}
	}
	cout << "giá trị của tổng các ước số chẵn là " << s << endl;
}
void tinh_tich_cac_so_le( int n)
{
	int s = 1;
	for (int i = 1; i <= n; i++)
	{
		if ( ( n % i ==0) && ( i % 2 == 1) )
		{
			s=s*i;
		}
	}
	cout << "giá trị của tích các ước số lẻ " << n << " " << "là" << " "<< s << endl;
}
void so_luong_uoc_so_chan ( int n )
{
	int s = 0;
	for ( int i = 1; i <= n; i++ )
	{
		if ( ( n % i == 0) && ( i % 2 == 0 ) )
		{
			s += 1 ;
		}
	}
	cout << "số lượng các ước số chẵn của " << n << " " << "là " << s << endl;
}
void tong_cac_uoc_so_nho_hon_n(int n)
{
	int s = 0;
	for (int i = 1; i < n; i++)
	{
		if ( n % i ==0)
		{
			s=s+i;
		}
	}
	cout << "giá trị của tổng các ước số nhỏ hơn " << n << " " << "là" << " "<< s << endl;
}
void tim_uoc_so_le_nho_nhat_cua_n( int n)
{
	int i = n;
	while( i >= 1 )
	{
		if ( ( n % i == 0 ) && ( i % 2 == 1) )
		{
			cout << "ước số lẻ lớn nhất của n là: " << i << endl;
			break;
		}
		i--;
	}
}
void so_hoan_thien( int n )
{
	int s = 0;
	for ( int i = 1; i < n; i++ )
	{
		if ( n % i == 0)
		{
			s += i;
		}
	}
	if( s == n )
		{
			cout << n << " là số hoàn thiện" << endl ;
		}
		else
		{
			cout << n << " không là số hoàn thiện" << endl;
		}
}
void kiem_tra_so_nguyen_to( int n )
{
	bool la_so_nguyen_to = true;
	for ( int i = 2 ;i <= sqrt(n) ;i++)
	{
		if ( n % i ==0)
		{
			la_so_nguyen_to = false;
			break;
		}
	}
	if ( la_so_nguyen_to == true )
	{
		cout << n << " là số nguyên tố " << endl;

	}
	if ( la_so_nguyen_to == false )
	{
		cout << n << " không phải là sô nguyên tố " << endl ;

	}
}
void CheckSquareNumber( int n )
{
	int b = sqrt( n );
	if (b * b == n)
	{
		cout << n << " là số chình phương" << endl;
	}
	else 
	{
		cout << n << " không phải số chính phương" << endl;
	}
}
void check_Symmetrical_number( int n )
{
	int a = 0;
	int b ;
	int attempt = n;
	while ( n > 0 )
	{
	   b = n % 10;// phần dư khi lấy n chia 10
	   n = n /10;
	   a = a*10 + b;// số đọc từ phải qua trái
	} 
	if ( attempt == a  )
	{
		cout << attempt << " là số đối xứng " << endl;
	
	}
	else 
	{
		cout << attempt << " không phải là số đối xứng" << endl;
	}
}
void search_k( int n )
{
	int tong = 0;
	int i = 1;
	while( tong + i < n )
	{
		tong += i;
		i = i + 1;
	}
	cout << "giá trị lớn nhất của k đê tổng 1+2+3+..+k < n là: " << i-1 << endl;
}
void tong_cac_so_cua_n( int n )
{
	int tong_cac_so_cua_n = 0;
	int attempt = n;
	while ( n > 0 )
	{
		int phan_du = n % 10;
		n = n / 10;
		tong_cac_so_cua_n += phan_du;
		
	}
	cout << "tổng các chữ số của số " << attempt << " là " << tong_cac_so_cua_n << endl;
}
void tich_cac_so_cua_n( int n )
{
	int tong_cac_so_cua_n = 1;
	int attempt = n;
	while ( n > 0 )
	{
		int phan_du = n % 10;
		n = n / 10;
		tong_cac_so_cua_n *= phan_du;
		
	}
	cout << "tích các chữ số của số  " << attempt << " là " << tong_cac_so_cua_n << endl;
}
void so_chu_so_le_cua_so_n( int n )
{
	int tong_cac_so_le_cua_n = 0 ;
	int attempt = n;
	while ( n > 0 )
	{
		int phan_du = n % 10;
		n = n / 10;
		if ( phan_du % 2 == 1)
		{
			tong_cac_so_le_cua_n += 1;
		}
		
	}
	cout << "số chữ số lẻ của số " << attempt << " là " << tong_cac_so_le_cua_n << endl;
}
void tong_cac_chu_so_chan_cua_so_n( int n )
{
	int phan_du = 0;
	int tong_cac_chu_so_chan_cua_so_n = 0;
	int attempt = n;
	while( n > 0)
	{
		phan_du = n % 10;
		n = n/10;
		if ( phan_du % 2 == 0)
		{
			tong_cac_chu_so_chan_cua_so_n += phan_du;
		}
		
	}
	cout << "tổng các chư số chẵn của số " << attempt << " là " << tong_cac_chu_so_chan_cua_so_n << endl;
}
void tich_cac_chu_so_chan_cua_so_n( int n )
{
	int phan_du = 0;
	int tich_cac_chu_so_chan_cua_so_n = 1;
	int attempt = n;
	while( n > 0)
	{
		phan_du = n % 10;
		n = n/10;
		if ( phan_du % 2 == 1 )
		{
			tich_cac_chu_so_chan_cua_so_n *= phan_du;
		}
		
	}
	cout << "tích các chư số chẵn của số " << attempt << " là " << tich_cac_chu_so_chan_cua_so_n << endl;
}
void so_dau_tien_cua_n( int n )
{
	int attempt = n;
	while ( n > 10 )
	{
		n = n/10;
	}
	cout << "chữ số đầu tiên của số " << attempt << " là " << n << endl;
}
void tim_so_dao_nguoc( int n )
{
	int attempt = n;
	int so_dao_nguoc = 0;
	while ( n > 0)
	{
		int phan_du = n % 10;
		n = n/10;
		so_dao_nguoc = so_dao_nguoc*10 +  phan_du;
	}
	cout << "số đảo ngược của số " << attempt << " là " << so_dao_nguoc << endl;

}
void tim_so_lon_nhat_cua_n( int n )
{
	int attempt = n;
	int phan_du =0 ;
	while ( n > 0 )
	{
			n = n/10;
		int max_phan_du = n % 10;
		if ( max_phan_du >= phan_du )
		{
			phan_du = max_phan_du;
		}
	}
	cout << "chữ số lớn nhất của số " << attempt << " là " << phan_du << endl;

}
void dem_chu_so_lon_nhat_cua_n( int n )
{
	
	int attempt = n;
	int attempt1 = n;
	int phan_du =0 ;
	int tong = 0;
	while ( n > 0 )
	{
			n = n / 10;
		int max_phan_du = n % 10;
		if ( max_phan_du > phan_du )
		{
			phan_du = max_phan_du;
		}
	}
	while ( attempt > 0 )
	{
		int a = attempt % 10;
		if ( a == phan_du )
		{
			tong += 1;
		}
		attempt = attempt / 10;

	}
	cout << "số " <<  phan_du << " xuất hiện trong số " << attempt1 << " là " << tong << " lần" << endl;
}
void dem_so_luong_so_nho_nhat( int n )
{
	int min_number = 9;
	int attempt = n;
	int tong_so_lan = 0;
	while ( n > 0 )
	{
		int phan_du = n % 10;
		n = n /10 ;
		if ( phan_du <= min_number)
		{
			min_number = phan_du;
		}

	}
	while ( attempt > 0)
	{
		int a = attempt % 10;
		if ( a == min_number )
		{
			tong_so_lan ++;
		}
		attempt /= 10;
		
	}
	
	cout << "số nhỏ nhất là " << min_number << " và số lần xuất hiện của số " << min_number << " là " << tong_so_lan << endl;
	
}
void dem_so_luong_so_dau_tien ( int n )
{
	int phan_du;
	int attempt = n;
	int tong = 0;
	int attempt1 = n;
	int phan_du_2;
	while ( n > 0 )
	{
		phan_du = n % 10;
		n = n / 10;
	}
	while ( attempt > 0 )
	{
		phan_du_2 = attempt % 10;
		attempt = attempt / 10;
		if ( phan_du_2 == phan_du)
		{
			tong+=1;
		}
	}
	cout << "số lần suất hiện số  " << phan_du << " của số " << attempt1 << " là " << tong << endl;

}

void kiem_tra_xem_n_co_phai_la_so_toan_le_hay_khong ( int n )
{
	int attempt = n;
	while ( n > 0 )
	{
		int phan_du = n % 10;
		n = n / 10;
		if ( phan_du % 2 == 0 )
		{
			cout << attempt  << " không phải là số toàn lẻ " << endl;
		    return;
		}
	}
	cout <<attempt <<  " là số toàn lẻ " << endl;
}
void kiem_tra_xem_n_co_phai_la_so_toan_chan_hay_khong( int n )
{
	int attempt = n;
	while ( n > 0 )
	{
		int phan_du = n % 10;
		n = n / 10;
		if ( phan_du % 2 == 1 )
		{
			cout << attempt  << " không phải là số toàn chẵn " << endl;
		    return;
		}
	}
	cout <<attempt <<  " là số toàn chẵn " << endl;
}
void kiem_ta_so_n_co_tang_dan_hay_khong ( int n )
{
	int attempt = n;
	while ( n > 0 )
	{
		int phan_du = n % 10;
			n = n / 10;
		int	phan_du_2 = n % 10;
		if ( phan_du < phan_du_2 )
		{
			cout << attempt  << "  không phải số có chữ tăng dần " << endl;	
			return;		
		}

	}
	cout << attempt  << "  là số có chữ số tăng dần " << endl;	

}
void kiem_tra_so_n_co_giam_dan_hay_khong ( int n )
{
	int attempt = n;
	while ( n > 10 )
	{
		int phan_du = n % 10;
			n = n / 10;
		int	phan_du_2 = n % 10;
		if ( phan_du > phan_du_2 )
		{
			cout << attempt  << "  không phải số có chữ giảm dần  " << endl;	
			return;			
		}

	}
	cout << attempt  << "  là số có chữ số giảm dần " << endl;	

}

int main()
{
	int n;
	input("nhập vào một số nguyên dương ",n);
	cacuocso(n);
	lietkeuocso(n);
	tongcacuocso(n);
	tichcacuocso(n);
	uocsole(n);
	tinh_tong_cac_uoc_so_chan(n);
	tinh_tich_cac_so_le(n);
	so_luong_uoc_so_chan(n);
	tong_cac_uoc_so_nho_hon_n(n);
	tim_uoc_so_le_nho_nhat_cua_n(n);
	so_hoan_thien(n);
	kiem_tra_so_nguyen_to(n);
	CheckSquareNumber(n);
	check_Symmetrical_number(n);
	search_k(n);
	tong_cac_so_cua_n(n);
	tich_cac_so_cua_n(n);
	so_chu_so_le_cua_so_n(n);
	tong_cac_chu_so_chan_cua_so_n(n);
	tich_cac_chu_so_chan_cua_so_n(n);
	so_dau_tien_cua_n(n);
	tim_so_dao_nguoc(n);
	tim_so_lon_nhat_cua_n(n);
	dem_chu_so_lon_nhat_cua_n(n);
	dem_so_luong_so_nho_nhat(n);
	dem_so_luong_so_dau_tien(n);
	kiem_tra_xem_n_co_phai_la_so_toan_le_hay_khong(n);
	kiem_tra_xem_n_co_phai_la_so_toan_chan_hay_khong(n);
	kiem_ta_so_n_co_tang_dan_hay_khong(n);
	 kiem_tra_so_n_co_giam_dan_hay_khong(n);

	
	return 0;
}
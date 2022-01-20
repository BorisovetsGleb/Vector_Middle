#include "middle_list.h"

void itc_pos_neg_separator_lst(const vector <int>& lst, vector <int>& pol, vector <int>& nol, vector <int>& otr)
{
	int i = 0, len = lst.size();
	while (i < len)
	{
		if (lst[i] == 0)
		{
			nol.push_back(lst[i]);
		}
		if (lst[i] > 0)
		{
			pol.push_back(lst[i]);
		}
		if (lst[i] < 0)
		{
			otr.push_back(lst[i]);
		}
		i++;
	}
	out_vect_int(otr);
	cout << ", ";
	out_vect_int(nol);
	cout << ", ";
	out_vect_int(pol);
}

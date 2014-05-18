#include <stdio.h>

int main()
{
	int t, ng, nm, m_g, m_m, g, m;
	scanf("%d", &t);
	while(t--)
	{
		scanf("%d %d", &ng, &nm);
		m_g = m_m = -1;

		while(ng--)
		{
			scanf("%d", &g);
			if(g > m_g) m_g = g;
		}
		while(nm--)
		{
			scanf("%d", &m);
			if(m > m_m) m_m = m;
		}

		if(m_g >= m_m) printf("Godzilla\n");
		else printf("MechaGodzilla\n");
	}
	return 0;
}

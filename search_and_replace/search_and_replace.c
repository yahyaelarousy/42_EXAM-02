#include <unistd.h>

int	main(int argc, char **argv)
{
	int	i;

	// Vérifier qu'il y a exactement 3 arguments
	if (argc == 4)
	{
		// Vérifier que le 2e et le 3e argument sont bien des caractères uniques
		if (argv[2][1] == '\0' && argv[3][1] == '\0')
		{
			i = 0;
			while (argv[1][i])
			{
				if (argv[1][i] == argv[2][0])
					write(1, &argv[3][0], 1);
				else
					write(1, &argv[1][i], 1);
				i++;
			}
		}
	}
	write(1, "\n", 1);
	return (0);
}


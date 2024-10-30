#include <stdio.h>
#include <limits.h>
#include "ft_printf.h" // Inclure votre propre bibliothèque ft_printf

int main() {
	int ret_ft, ret_std;

	// Cas de test avec des chaînes de caractères
	printf("=== Test avec des chaînes de caractères ===\n");
	ret_ft = ft_printf("ft_printf : %s\n", "Bonjour, ft_printf !");
	ret_std = printf("   printf : %s\n", "Bonjour, ft_printf !");
	printf("Retour ft_printf: %d, printf: %d\n\n", ret_ft, ret_std);

	// Cas de test avec des entiers
	printf("=== Test avec des entiers ===\n");
	ret_ft = ft_printf("ft_printf : %d\n", 42);
	ret_std = printf("   printf : %d\n", 42);
	printf("Retour ft_printf: %d, printf: %d\n\n", ret_ft, ret_std);

	// Cas de test avec des entiers négatifs
	printf("=== Test avec des entiers négatifs ===\n");
	ret_ft = ft_printf("ft_printf : %d\n", -42);
	ret_std = printf("   printf : %d\n", -42);
	printf("Retour ft_printf: %d, printf: %d\n\n", ret_ft, ret_std);

	// Cas de test avec des valeurs maximales et minimales
	printf("=== Test avec des valeurs limites ===\n");
	ret_ft = ft_printf("ft_printf : %d\n", INT_MAX);
	ret_std = printf("   printf : %d\n", INT_MAX);
	printf("Retour ft_printf: %d, printf: %d\n", ret_ft, ret_std);

	ret_ft = ft_printf("ft_printf : %d\n", INT_MIN);
	ret_std = printf("   printf : %d\n", INT_MIN);
	printf("Retour ft_printf: %d, printf: %d\n\n", ret_ft, ret_std);

	// Cas de test avec des hexadécimaux
	printf("=== Test avec des hexadécimaux ===\n");
	ret_ft = ft_printf("ft_printf : %x\n", 236);
	ret_std = printf("   printf : %x\n", 236);
	printf("Retour ft_printf: %d, printf: %d\n\n", ret_ft, ret_std);

	// Cas de test avec des pointeurs
	printf("=== Test avec des pointeurs ===\n");
	int a = 42;
	ret_ft = ft_printf("ft_printf : %p\n", &a);
	ret_std = printf("   printf : %p\n", &a);
	printf("Retour ft_printf: %d, printf: %d\n\n", ret_ft, ret_std);

	// Cas de test avec des caractères
	printf("=== Test avec des caractères ===\n");
	ret_ft = ft_printf("ft_printf : %c\n", 'A');
	ret_std = printf("   printf : %c\n", 'A');
	printf("Retour ft_printf: %d, printf: %d\n\n", ret_ft, ret_std);

	// Cas de test avec des pourcentages
	printf("=== Test avec des pourcentages ===\n");
	ret_ft = ft_printf("ft_printf : %%\n");
	ret_std = printf("   printf : %%\n");
	printf("Retour ft_printf: %d, printf: %d\n\n", ret_ft, ret_std);

	// Cas de test avec NULL pour les chaînes de caractères
	printf("=== Test avec NULL pour les chaînes de caractères ===\n");
	ret_ft = ft_printf("ft_printf : %s\n", (char *)NULL);
	ret_std = printf("   printf : %s\n", (char *)NULL);
	printf("Retour ft_printf: %d, printf: %d\n\n", ret_ft, ret_std);

	// Cas de test avec NULL pour les pointeurs
	printf("=== Test avec NULL pour les pointeurs ===\n");
	ret_ft = ft_printf("ft_printf : %p\n", (void *)NULL);
	ret_std = printf("   printf : %p\n", (void *)NULL);
	printf("Retour ft_printf: %d, printf: %d\n\n", ret_ft, ret_std);

	return 0;
}

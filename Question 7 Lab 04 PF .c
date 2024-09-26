#include <stdio.h>
#include <conio.h>
int main()
{
	int n;
	printf("Enter the number of lowercase english words you want,maximum number of words program can print at a time is 9 \n");
	scanf("%d",&n);
	switch(n)
	{
		case 1:
			printf("apple\n");
			break;
		case 2:
			printf("river\n");
			printf("ocean\n");
			break;
		case 3:
			printf("branch\n");
			printf("tree\n");
			printf("wood\n");
			break;
		case 4:
			printf("orange\n");
			printf("purple\n");
			printf("pink\n");
			printf("yellow\n");
			break;
		case 5:
			printf("cloudy\n");
			printf("rainy\n");
			printf("windy\n");
			printf("sunny\n");
			printf("stormy\n");
			break;
		case 6:
			printf("good\n");
			printf("excellent\n");
			printf("awesome\n");
			printf("nice\n");
			printf("satisfied\n");
			printf("impressive\n");
			break;
		case 7:
			printf("keyboard\n");
			printf("mouse\n");
			printf("monitor\n");
			printf("processor\n");
			printf("ports\n");
			printf("speakers\n");
			printf("camera\n");
			break;
		case 8:
			printf("teacher\n");
			printf("classroom\n");
			printf("homework\n");
			printf("coursebook\n");
			printf("exam\n");
			printf("curriculum\n");
			printf("lecture\n");
			printf("student\n");
			break;
		case 9:
			printf("computer\n");
			printf("network\n");
			printf("internet\n");
			printf("smartphone\n");
			printf("algorithm\n");
			printf("pseudocode\n");
			printf("flowchart\n");
			printf("coding\n");
			printf("science\n");
			break;
		default:
			printf("greater than 9\n");
		
	}
	return 0;
}
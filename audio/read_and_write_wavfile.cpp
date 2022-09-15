
#include <iostream>
#include <stdio.h>
#include <stdlib.h>

using namespace std;

typedef struct header_file
{
    char chunk_id[4];
    int chunk_size;
    char format[4];
    char subchunk1_id[4];
    int subchunk1_size;
    short int audio_format;
    short int num_channels;
    int sample_rate;			
    int byte_rate;
    short int block_align;
    short int bits_per_sample;
    char subchunk2_id[4];
    int subchunk2_size;			
} header;

typedef struct header_file* header_p;




int main()

{
	FILE * infile = fopen("audio1.wav","rb");		
	FILE * outfile = fopen("output.wav","wb");		

	int BUFSIZE = 512;				
	int count = 0;						
	short int buff16[BUFSIZE];				
	header_p meta = (header_p)malloc(sizeof(header));	
	int nb;							
	if (infile)
	{
		fread(meta, 1, sizeof(header), infile);
		fwrite(meta,1, sizeof(*meta), outfile);
		cout << " Size of Header file is "<<sizeof(*meta)<<" bytes" << endl;
		cout << " Sampling rate of the input wave file is "<< meta->sample_rate <<" Hz" << endl;
		cout << " Number of samples in wave file are " << meta->subchunk2_size << " samples" << endl;

		while (!feof(infile))
		{
			nb = fread(buff16,1,BUFSIZE,infile);		
		
			count++;					

			fwrite(buff16,1,nb,outfile);
		}
	cout << " Number of frames in the input wave file are " <<count << endl;
	}
return 0;
}

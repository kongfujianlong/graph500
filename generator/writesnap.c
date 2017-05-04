#include <stdio.h>

#include "graph_generator.h"
#include "writesnap.h"


void WriteSnap(packed_edge* result, int64_t nedges, const char* file_path){
  FILE *fp;
  fp = fopen(file_path, "w+");
  int64_t i = 0;
  for(; i < nedges; ++i){
    uint64_t src = get_v0_from_edge(&result[i]);
    uint64_t dst = get_v1_from_edge(&result[i]);
    fprintf(fp, "%" PRIu64 "\t" "%" PRIu64 "\n", src, dst);
  }
  fclose(fp);
}

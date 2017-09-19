#ifndef GENERAL_FUNC_H
#define GENERAL_FUNC_H

ptrdiff_t calOffsetByLineIndex(ptrdiff_t index, int64_t *stride, int dim, int64_t* size)
{
  int i = 0;
  ptrdiff_t rem;
  ptrdiff_t offset = 0;
  for(i = dim-1; i >= 0; --i) {
    rem = index%size[i];
    offset += rem*stride[i];
    index /= size[i];
  }
  return offset;
}


#endif

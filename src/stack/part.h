#ifndef _SL_PART
#define _SL_PART

struct particle {
  double x;
  double y;
  double z;
  double ct;
  double sp;
  double cp;
  double energy;
  double weight;
  double amass;
  double amu;
  unsigned int id;
  unsigned int z;
  unsigned int a;
  unsigned int gen;
  unsigned int zone;
}

#endif /* !_SL_PART */

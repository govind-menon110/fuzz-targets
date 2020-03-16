#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>
#include <netinet/in.h>
#include <string.h>


#include "constants.h"
#include "lswlog.h"
#include "lswalloc.h"
#include "impair.h"
#include "ip_info.h"            /* used by pbs_in_address() */
#include "packet.h"
#include "shunk.h"

extern "C" int LLVMFuzzerTestOneInput(const uint8_t *Data, size_t Size)
{
pb_stream *obj_pbs;
pb_stream *ins;
in_struct(Data, Size,ins, obj_pbs); 

return 0
}

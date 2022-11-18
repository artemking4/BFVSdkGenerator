// Object: BFSpartaSetGlobePostionPayload
// ClassId: 4728
// RuntimeId: 36791
// TypeInfo: 0x0000000144C716A0
#include "../SpartaShared/SpartaPayload.h"
#include "../Global/Float32.h"

#pragma pack(push, 8)
namespace Casablanca {
    class BFSpartaSetGlobePostionPayload : public SpartaShared::SpartaPayload {
        Float32 X; // 0x18
        Float32 Y; // 0x1C
        Float32 Radius; // 0x20
        Float32 AngleX; // 0x24
        Float32 AngleY; // 0x28
        Float32 AngleZ; // 0x2C
    }; // 0x30
    static_assert(sizeof(BFSpartaSetGlobePostionPayload) == 0x30);
}
#pragma pack(pop)
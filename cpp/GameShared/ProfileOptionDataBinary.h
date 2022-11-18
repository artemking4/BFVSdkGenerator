// Object: ProfileOptionDataBinary
// ClassId: 668
// RuntimeId: 50810
// TypeInfo: 0x0000000144E75240
#include "../GameShared/ProfileOptionData.h"
#include "../Global/Int32.h"

#pragma pack(push, 8)
namespace GameShared {
    class ProfileOptionDataBinary : public GameShared::ProfileOptionData {
        Int32 MaxLength; // 0x30
        char pad_0x34[0x4];
    }; // 0x38
    static_assert(sizeof(ProfileOptionDataBinary) == 0x38);
}
#pragma pack(pop)
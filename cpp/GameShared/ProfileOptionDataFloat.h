// Object: ProfileOptionDataFloat
// ClassId: 671
// RuntimeId: 1304
// TypeInfo: 0x0000000144E75440
#include "../GameShared/ProfileOptionData.h"
#include "../Global/Float32.h"

#pragma pack(push, 8)
namespace GameShared {
    class ProfileOptionDataFloat : public GameShared::ProfileOptionData {
        Float32 Min; // 0x30
        Float32 Max; // 0x34
        Float32 Value; // 0x38
        Float32 Step; // 0x3C
    }; // 0x40
    static_assert(sizeof(ProfileOptionDataFloat) == 0x40);
}
#pragma pack(pop)
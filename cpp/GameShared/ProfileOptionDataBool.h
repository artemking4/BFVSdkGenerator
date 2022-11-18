// Object: ProfileOptionDataBool
// ClassId: 669
// RuntimeId: 62450
// TypeInfo: 0x0000000144E75340
#include "../GameShared/ProfileOptionData.h"
#include "../Global/Boolean.h"

#pragma pack(push, 8)
namespace GameShared {
    class ProfileOptionDataBool : public GameShared::ProfileOptionData {
        Boolean Value; // 0x30
        char pad_0x31[0x7];
    }; // 0x38
    static_assert(sizeof(ProfileOptionDataBool) == 0x38);
}
#pragma pack(pop)
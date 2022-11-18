// Object: ProfileOptionData
// ClassId: 667
// RuntimeId: 20944
// TypeInfo: 0x0000000144E75540
#include "../Core/Asset.h"
#include "../Global/CString.h"
#include "../GameShared/ProfileOptionsType.h"
#include "../Global/Boolean.h"

#pragma pack(push, 8)
namespace GameShared {
    class ProfileOptionData : public Core::Asset {
        CString UniqueId; // 0x20
        GameShared::ProfileOptionsType Category; // 0x28
        Boolean LocalPlayerSpecific; // 0x2C
        char pad_0x2D[0x3];
    }; // 0x30
    static_assert(sizeof(ProfileOptionData) == 0x30);
}
#pragma pack(pop)
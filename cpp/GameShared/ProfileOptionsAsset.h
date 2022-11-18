// Object: ProfileOptionsAsset
// ClassId: 674
// RuntimeId: 6296
// TypeInfo: 0x0000000144E755C0
#include "../Core/Asset.h"
#include "../Global/CString.h"
#include "../Global/Uint32.h"
#include "../Global/Boolean.h"
#include "../GameShared/ProfileOptionData.h"

#pragma pack(push, 8)
namespace GameShared {
    class ProfileOptionsAsset : public Core::Asset {
        CString FileName; // 0x20
        CString ContentName; // 0x28
        Uint32 FileSize; // 0x30
        char pad_0x34[0x4];
        Array<GameShared::ProfileOptionData> Options; // 0x38
        Array<GameShared::ProfileOptionData> OptionsPs3; // 0x40
        Array<GameShared::ProfileOptionData> OptionsXenon; // 0x48
        Array<GameShared::ProfileOptionData> OptionsGen4a; // 0x50
        Array<GameShared::ProfileOptionData> OptionsGen4b; // 0x58
        Array<GameShared::ProfileOptionData> OptionsWin; // 0x60
        Boolean AutoSaveOnQuit; // 0x68
        char pad_0x69[0x7];
    }; // 0x70
    static_assert(sizeof(ProfileOptionsAsset) == 0x70);
}
#pragma pack(pop)
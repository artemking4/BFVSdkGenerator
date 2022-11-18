// Object: UIEventLogEntry
// ClassId: 5396
// RuntimeId: 41018
// TypeInfo: 0x0000000144D1E970
#include "../Core/DataContainer.h"
#include "../Global/CString.h"
#include "../Core/Vec3.h"
#include "../Global/Boolean.h"
#include "../CasablancaShared/PlayerDeathType.h"
#include "../UIIncubatorShared/LocalizedString.h"
#include "../Global/Int32.h"

#pragma pack(push, 16)
namespace CasablancaShared {
    class UIEventLogEntry : public Core::DataContainer {
        CString KillerText; // 0x18
        CString VictimText; // 0x20
        char pad_0x28[0x8];
        Core::Vec3 KillerColor; // 0x30
        Core::Vec3 VictimColor; // 0x40
        CasablancaShared::PlayerDeathType VictimDeathType; // 0x50
        char pad_0x54[0x4];
        CString Icon; // 0x58
        UIIncubatorShared::LocalizedString WeaponName; // 0x60
        Int32 WeaponUnlockIdentifier; // 0x68
        Boolean KillerIsLocalPlayer; // 0x6C
        Boolean VictimIsLocalPlayer; // 0x6D
        Boolean IsSuicide; // 0x6E
        Boolean IsHeadshot; // 0x6F
        Boolean HasExpired; // 0x70
        char pad_0x71[0x6F];
    }; // 0xE0
    static_assert(sizeof(UIEventLogEntry) == 0xE0);
}
#pragma pack(pop)
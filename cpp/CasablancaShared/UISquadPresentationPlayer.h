// Object: UISquadPresentationPlayer
// ClassId: 5526
// RuntimeId: 26645
// TypeInfo: 0x0000000144D41A50
#include "../Core/DataContainer.h"
#include "../Global/CString.h"
#include "../Global/Int32.h"
#include "../Global/Boolean.h"

#pragma pack(push, 8)
namespace CasablancaShared {
    class UISquadPresentationPlayer : public Core::DataContainer {
        CString Name; // 0x18
        CString KitIcon; // 0x20
        Int32 Kills; // 0x28
        Int32 Deaths; // 0x2C
        Int32 Score; // 0x30
        Int32 Rank; // 0x34
        Int32 Ping; // 0x38
        Boolean IsLocalPlayer; // 0x3C
        Boolean IsSquadLeader; // 0x3D
        Boolean VoipIsEnabled; // 0x3E
        Boolean VoipIsMuted; // 0x3F
        Boolean VoipIsSpeaking; // 0x40
        Boolean IsValid; // 0x41
        char pad_0x42[0x6];
    }; // 0x48
    static_assert(sizeof(UISquadPresentationPlayer) == 0x48);
}
#pragma pack(pop)
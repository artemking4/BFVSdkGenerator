// Object: UISquadPresentationSquad
// ClassId: 5527
// RuntimeId: 64680
// TypeInfo: 0x0000000144D419D0
#include "../Core/DataContainer.h"
#include "../Global/CString.h"
#include "../Global/Int32.h"
#include "../CasablancaShared/UISquadPresentationPlayer.h"

#pragma pack(push, 8)
namespace CasablancaShared {
    class UISquadPresentationSquad : public Core::DataContainer {
        CString Name; // 0x18
        Int32 Kills; // 0x20
        Int32 Deaths; // 0x24
        Int32 Score; // 0x28
        Int32 PlayerCount; // 0x2C
        Array<CasablancaShared::UISquadPresentationPlayer> Players; // 0x30
    }; // 0x38
    static_assert(sizeof(UISquadPresentationSquad) == 0x38);
}
#pragma pack(pop)
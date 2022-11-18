// Object: UIVehicleSeatingEntry
// ClassId: 5545
// RuntimeId: 52990
// TypeInfo: 0x0000000144D410D0
#include "../Core/DataContainer.h"
#include "../Global/CString.h"
#include "../GameShared/EntrySeatType.h"
#include "../GameShared/EntrySeatPosition.h"
#include "../Global/Boolean.h"
#include "../CasablancaShared/BFUIPlayerObject.h"
#include "../Core/Vec4.h"

#pragma pack(push, 16)
namespace CasablancaShared {
    class UIVehicleSeatingEntry : public Core::DataContainer {
        CString SeatIndex; // 0x18
        GameShared::EntrySeatType SeatType; // 0x20
        char pad_0x24[0xC];
        Core::Vec4 SquadPositionColor; // 0x30
        GameShared::EntrySeatPosition SeatPosition; // 0x40
        char pad_0x44[0x4];
        CString PlayerName; // 0x48
        CasablancaShared::BFUIPlayerObject Player; // 0x50
        Boolean IsSquadMember; // 0x58
        Boolean IsLocalPlayer; // 0x59
        Boolean IsOccupied; // 0x5A
        char pad_0x5B[0x5];
    }; // 0x60
    static_assert(sizeof(UIVehicleSeatingEntry) == 0x60);
}
#pragma pack(pop)
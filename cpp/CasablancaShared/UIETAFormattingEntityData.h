// Object: UIETAFormattingEntityData
// ClassId: 3631
// RuntimeId: 21808
// TypeInfo: 0x0000000144D217F0
#include "../Entity/EntityData.h"
#include "../Global/Float32.h"
#include "../Global/CString.h"

#pragma pack(push, 8)
namespace CasablancaShared {
    class UIETAFormattingEntityData : public Entity::EntityData {
        Float32 TimeLeft; // 0x20
        char pad_0x24[0x4];
        CString EtaSID; // 0x28
        CString EtaUnavailableSID; // 0x30
        CString DaysHoursSID; // 0x38
        CString HoursMinutesSID; // 0x40
        CString MinutesSecondsSID; // 0x48
    }; // 0x50
    static_assert(sizeof(UIETAFormattingEntityData) == 0x50);
}
#pragma pack(pop)
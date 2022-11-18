// Object: BFUIVehicleClassObject
// ClassId: 4133
// RuntimeId: 7167
// TypeInfo: 0x0000000144D7F1A0
#include "../CasablancaShared/Identifiable.h"

#pragma pack(push, 8)
namespace CasablancaShared {
    class BFUIVehicleClassObject : public CasablancaShared::Identifiable {
        char pad_0x18[0x10];
    }; // 0x28
    static_assert(sizeof(BFUIVehicleClassObject) == 0x28);
}
#pragma pack(pop)
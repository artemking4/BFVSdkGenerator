// Object: BFUISoldierArchetypeObject
// ClassId: 4114
// RuntimeId: 46698
// TypeInfo: 0x0000000144D7FD20
#include "../CasablancaShared/BFUISoldierClassObject.h"

#pragma pack(push, 8)
namespace CasablancaShared {
    class BFUISoldierArchetypeObject : public CasablancaShared::BFUISoldierClassObject {
        char pad_0x28[0x10];
    }; // 0x38
    static_assert(sizeof(BFUISoldierArchetypeObject) == 0x38);
}
#pragma pack(pop)
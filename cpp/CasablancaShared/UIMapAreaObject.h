// Object: UIMapAreaObject
// ClassId: 5466
// RuntimeId: 6539
// TypeInfo: 0x0000000144D5F760
#include "../Core/DataContainer.h"
#include "../Global/CString.h"
#include "../Core/LinearTransform.h"
#include "../Global/Boolean.h"

#pragma pack(push, 16)
namespace CasablancaShared {
    class UIMapAreaObject : public Core::DataContainer {
        CString Name; // 0x18
        Boolean Active; // 0x20
        char pad_0x21[0xF];
        Core::LinearTransform NameTransform; // 0x30
    }; // 0x70
    static_assert(sizeof(UIMapAreaObject) == 0x70);
}
#pragma pack(pop)
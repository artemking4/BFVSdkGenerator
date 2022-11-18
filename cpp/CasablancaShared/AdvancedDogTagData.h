// Object: AdvancedDogTagData
// ClassId: 435
// RuntimeId: 50895
// TypeInfo: 0x0000000144D013A0
#include "../CasablancaShared/DogTagData.h"
#include "../Global/CString.h"

#pragma pack(push, 8)
namespace CasablancaShared {
    class AdvancedDogTagData : public CasablancaShared::DogTagData {
        CString StatCode; // 0x90
        CString InternalStatSIDTop; // 0x98
        CString InternalStatSIDBottom; // 0xA0
    }; // 0xA8
    static_assert(sizeof(AdvancedDogTagData) == 0xA8);
}
#pragma pack(pop)
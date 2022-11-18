// Object: BFUILayerEntityData
// ClassId: 3701
// RuntimeId: 43742
// TypeInfo: 0x0000000144D6D530
#include "../RimeShared/RimeLayerEntityData.h"
#include "../Global/CString.h"

#pragma pack(push, 8)
namespace CasablancaShared {
    class BFUILayerEntityData : public RimeShared::RimeLayerEntityData {
        CString LayerName; // 0x40
    }; // 0x48
    static_assert(sizeof(BFUILayerEntityData) == 0x48);
}
#pragma pack(pop)
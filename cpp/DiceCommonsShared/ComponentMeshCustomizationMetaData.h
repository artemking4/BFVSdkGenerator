// Object: ComponentMeshCustomizationMetaData
// ClassId: 1422
// RuntimeId: 65188
// TypeInfo: 0x0000000144DB6090
#include "../GameShared/ComponentCustomizationMetaData.h"
#include "../Global/CString.h"

#pragma pack(push, 8)
namespace DiceCommonsShared {
    class ComponentMeshCustomizationMetaData : public GameShared::ComponentCustomizationMetaData {
        Array<CString> Tags; // 0x18
    }; // 0x20
    static_assert(sizeof(ComponentMeshCustomizationMetaData) == 0x20);
}
#pragma pack(pop)
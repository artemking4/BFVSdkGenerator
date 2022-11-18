// Object: TemplateDescriptorData
// ClassId: 5154
// RuntimeId: 35440
// TypeInfo: 0x0000000144BE85F0
#include "../Core/DataContainer.h"
#include "../Core/Asset.h"
#include "../Core/TemplateExposedObject.h"

#pragma pack(push, 8)
namespace Core {
    class TemplateDescriptorData : public Core::DataContainer {
        Core::Asset TargetAsset; // 0x18
        Array<Core::TemplateExposedObject> ExposedObjects; // 0x20
    }; // 0x28
    static_assert(sizeof(TemplateDescriptorData) == 0x28);
}
#pragma pack(pop)
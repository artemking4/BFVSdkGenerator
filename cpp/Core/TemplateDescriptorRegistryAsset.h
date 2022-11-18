// Object: TemplateDescriptorRegistryAsset
// ClassId: 794
// RuntimeId: 33206
// TypeInfo: 0x0000000144BE8570
#include "../Core/Asset.h"
#include "../Core/TemplateDescriptorData.h"

#pragma pack(push, 8)
namespace Core {
    class TemplateDescriptorRegistryAsset : public Core::Asset {
        Array<Core::TemplateDescriptorData> Descriptors; // 0x20
    }; // 0x28
    static_assert(sizeof(TemplateDescriptorRegistryAsset) == 0x28);
}
#pragma pack(pop)
// Object: TemplateAsset
// ClassId: 793
// RuntimeId: 64655
// TypeInfo: 0x0000000144BE8670
#include "../Core/Asset.h"
#include "../Core/TemplateTarget.h"

#pragma pack(push, 8)
namespace Core {
    class TemplateAsset : public Core::Asset {
        Array<Core::TemplateTarget> Objects; // 0x20
    }; // 0x28
    static_assert(sizeof(TemplateAsset) == 0x28);
}
#pragma pack(pop)
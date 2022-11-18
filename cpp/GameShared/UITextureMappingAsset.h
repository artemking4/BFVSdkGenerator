// Object: UITextureMappingAsset
// ClassId: 897
// RuntimeId: 10259
// TypeInfo: 0x0000000144E95EB0
#include "../Core/Asset.h"
#include "../GameShared/UITextureMappingCompartment.h"
#include "../GameShared/UITextureMappingOutputEntry.h"
#include "../Global/Boolean.h"

#pragma pack(push, 8)
namespace GameShared {
    class UITextureMappingAsset : public Core::Asset {
        GameShared::UITextureMappingCompartment Compartment; // 0x20
        char pad_0x24[0x4];
        Array<GameShared::UITextureMappingOutputEntry> Output; // 0x28
        Boolean DisableAtlas; // 0x30
        Boolean ForceAtlas; // 0x31
        char pad_0x32[0x6];
    }; // 0x38
    static_assert(sizeof(UITextureMappingAsset) == 0x38);
}
#pragma pack(pop)
// Object: CutsceneImportSettings
// ClassId: 242
// RuntimeId: 39142
// TypeInfo: 0x0000000144E96E30
#include "../Core/Asset.h"
#include "../GameShared/DCCActorMappings.h"
#include "../GameShared/DCCQualityToCodecSettings.h"

#pragma pack(push, 8)
namespace GameShared {
    class CutsceneImportSettings : public Core::Asset {
        Array<GameShared::DCCActorMappings> ActorRows; // 0x20
        Array<GameShared::DCCQualityToCodecSettings> QualityRows; // 0x28
    }; // 0x30
    static_assert(sizeof(CutsceneImportSettings) == 0x30);
}
#pragma pack(pop)
// Object: EncounterAISettings
// ClassId: 1543
// RuntimeId: 55557
// TypeInfo: 0x0000000144D0B030
#include "../Core/DataContainer.h"
#include "../CasablancaShared/EncounterAICategoryTree.h"
#include "../CasablancaShared/EncounterAIIntensity.h"
#include "../Global/Uint32.h"
#include "../CasablancaShared/EncounterAIIncluded.h"
#include "../CasablancaShared/EncounterAIExcluded.h"
#include "../CasablancaShared/EncounterSpawnSettings.h"

#pragma pack(push, 8)
namespace CasablancaShared {
    class EncounterAISettings : public Core::DataContainer {
        CasablancaShared::EncounterAICategoryTree CategoriesSource; // 0x18
        Array<CasablancaShared::EncounterAIIntensity> Intensities; // 0x20
        Uint32 IntensitiesPointsSpan; // 0x28
        char pad_0x2C[0x4];
        Array<CasablancaShared::EncounterAIIncluded> Included; // 0x30
        Array<CasablancaShared::EncounterAIExcluded> Excluded; // 0x38
        CasablancaShared::EncounterSpawnSettings SpawnSettings; // 0x40
    }; // 0x48
    static_assert(sizeof(EncounterAISettings) == 0x48);
}
#pragma pack(pop)
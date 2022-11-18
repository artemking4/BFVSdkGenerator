// Object: SpatialAnalyzerData
// ClassId: 3247
// RuntimeId: 46885
// TypeInfo: 0x0000000144BFDDA0
#include "../Entity/EntityData.h"
#include "../Core/Realm.h"
#include "../Core/LinearTransform.h"
#include "../Global/Float32.h"
#include "../Global/Uint32.h"

#pragma pack(push, 16)
namespace BattleAI {
    class SpatialAnalyzerData : public Entity::EntityData {
        Core::Realm Realm; // 0x20
        char pad_0x24[0xC];
        Core::LinearTransform ReferenceTransform; // 0x30
        Float32 AnalysisFOV; // 0x70
        Uint32 SweepSteps; // 0x74
        Float32 EdgeDistanceThreshold; // 0x78
        Float32 NearLimitDistance; // 0x7C
        Float32 FarLimitDistance; // 0x80
        char pad_0x84[0xC];
    }; // 0x90
    static_assert(sizeof(SpatialAnalyzerData) == 0x90);
}
#pragma pack(pop)
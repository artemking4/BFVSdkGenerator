// Object: AmbientDataAsset
// ClassId: 147
// RuntimeId: 37003
// TypeInfo: 0x0000000144BDF760
#include "../Core/Asset.h"
#include "../AmbienceShared/LocalMaximaData.h"
#include "../AmbienceShared/BiomeDefinitionData.h"
#include "../AmbienceShared/CoastlineData_Struct.h"
#include "../AmbienceShared/CoastlineData.h"
#include "../AmbienceShared/WaterShapeScanData.h"
#include "../AmbienceShared/PointCloudData.h"
#include "../AmbienceShared/ExposureData.h"

#pragma pack(push, 8)
namespace AmbienceShared {
    class AmbientDataAsset : public Core::Asset {
        Array<AmbienceShared::LocalMaximaData> LocalMaximas; // 0x20
        Array<AmbienceShared::BiomeDefinitionData> Biomes; // 0x28
        AmbienceShared::CoastlineData_Struct Coastline; // 0x30
        Array<AmbienceShared::CoastlineData> Coastlines; // 0x50
        AmbienceShared::WaterShapeScanData WaterShapeScan; // 0x58
        Array<AmbienceShared::PointCloudData> PointClouds; // 0x60
        AmbienceShared::ExposureData Exposure; // 0x68
    }; // 0x70
    static_assert(sizeof(AmbientDataAsset) == 0x70);
}
#pragma pack(pop)
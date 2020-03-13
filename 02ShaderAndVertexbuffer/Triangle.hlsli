struct VertexIn
{
    float3 pos : POSITIONT;
    float4 color : COLOR;
};

struct VertexOut
{
    float4 pos : SV_POSITION;
    float4 color : COLOR;
};
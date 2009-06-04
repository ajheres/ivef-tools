
#include "IVEFPosReport.h"

PosReport::PosReport() {

    m_rateOfTurnPresent = false;
    m_orientationPresent = false;
    m_lengthPresent = false;
    m_breadthPresent = false;
    m_altitudePresent = false;
    m_navStatusPresent = false;
    m_updSensorTypePresent = false;
    m_ATONOffPosPresent = false;
}

PosReport::PosReport(const PosReport &val) : QObject() {

    m_pos = val.m_pos;
    m_id = val.m_id;
    m_sourceId = val.m_sourceId;
    m_updateTime = val.m_updateTime;
    m_SOG = val.m_SOG;
    m_COG = val.m_COG;
    m_lost = val.m_lost;
    m_rateOfTurnPresent = val.m_rateOfTurnPresent;
    m_rateOfTurn = val.m_rateOfTurn;
    m_orientationPresent = val.m_orientationPresent;
    m_orientation = val.m_orientation;
    m_lengthPresent = val.m_lengthPresent;
    m_length = val.m_length;
    m_breadthPresent = val.m_breadthPresent;
    m_breadth = val.m_breadth;
    m_altitudePresent = val.m_altitudePresent;
    m_altitude = val.m_altitude;
    m_navStatusPresent = val.m_navStatusPresent;
    m_navStatus = val.m_navStatus;
    m_updSensorTypePresent = val.m_updSensorTypePresent;
    m_updSensorType = val.m_updSensorType;
    m_ATONOffPosPresent = val.m_ATONOffPosPresent;
    m_ATONOffPos = val.m_ATONOffPos;
}

PosReport & PosReport::operator=(const PosReport &val) {

    m_pos = val.m_pos;
    m_id = val.m_id;
    m_sourceId = val.m_sourceId;
    m_updateTime = val.m_updateTime;
    m_SOG = val.m_SOG;
    m_COG = val.m_COG;
    m_lost = val.m_lost;
    m_rateOfTurnPresent = val.m_rateOfTurnPresent;
    m_rateOfTurn = val.m_rateOfTurn;
    m_orientationPresent = val.m_orientationPresent;
    m_orientation = val.m_orientation;
    m_lengthPresent = val.m_lengthPresent;
    m_length = val.m_length;
    m_breadthPresent = val.m_breadthPresent;
    m_breadth = val.m_breadth;
    m_altitudePresent = val.m_altitudePresent;
    m_altitude = val.m_altitude;
    m_navStatusPresent = val.m_navStatusPresent;
    m_navStatus = val.m_navStatus;
    m_updSensorTypePresent = val.m_updSensorTypePresent;
    m_updSensorType = val.m_updSensorType;
    m_ATONOffPosPresent = val.m_ATONOffPosPresent;
    m_ATONOffPos = val.m_ATONOffPos;
    return *this;
}

QString PosReport::encode( QString str) {

    str.replace('&', "&amp;");
    str.replace('<', "&lt;");
    str.replace('>', "&gt;");
    str.replace('"', "&quot;");
    return str;
}

void PosReport::setPos(Pos val) {

    m_pos = val;
}

Pos PosReport::getPos() const {

    return m_pos;
}

void PosReport::setId(int val) {

    m_id = val;
}

int PosReport::getId() const {

    return m_id;
}

void PosReport::setSourceId(int val) {

    m_sourceId = val;
}

int PosReport::getSourceId() const {

    return m_sourceId;
}

void PosReport::setUpdateTime(QDateTime val) {

    m_updateTime = val;
}

QDateTime PosReport::getUpdateTime() const {

    return m_updateTime;
}

void PosReport::setSOG(float val) {

    m_SOG = val;
}

float PosReport::getSOG() const {

    return m_SOG;
}

void PosReport::setCOG(float val) {

    if (val < 0)
        return;
    if (val > 360)
        return;
    m_COG = val;
}

float PosReport::getCOG() const {

    return m_COG;
}

void PosReport::setLost(QString val) {

    if ( ( val != "no" ) &&
         ( val != "yes" ) )
        return;
    m_lost = val;
}

QString PosReport::getLost() const {

    return m_lost;
}

void PosReport::setRateOfTurn(float val) {

    m_rateOfTurnPresent = true;
    m_rateOfTurn = val;
}

float PosReport::getRateOfTurn() const {

    return m_rateOfTurn;
}

bool PosReport::hasRateOfTurn() {

    return m_rateOfTurnPresent;
}

void PosReport::setOrientation(float val) {

    if (val < 0)
        return;
    if (val > 360)
        return;
    m_orientationPresent = true;
    m_orientation = val;
}

float PosReport::getOrientation() const {

    return m_orientation;
}

bool PosReport::hasOrientation() {

    return m_orientationPresent;
}

void PosReport::setLength(float val) {

    m_lengthPresent = true;
    m_length = val;
}

float PosReport::getLength() const {

    return m_length;
}

bool PosReport::hasLength() {

    return m_lengthPresent;
}

void PosReport::setBreadth(float val) {

    m_breadthPresent = true;
    m_breadth = val;
}

float PosReport::getBreadth() const {

    return m_breadth;
}

bool PosReport::hasBreadth() {

    return m_breadthPresent;
}

void PosReport::setAltitude(float val) {

    m_altitudePresent = true;
    m_altitude = val;
}

float PosReport::getAltitude() const {

    return m_altitude;
}

bool PosReport::hasAltitude() {

    return m_altitudePresent;
}

void PosReport::setNavStatus(int val) {

    if ( ( val != 0 ) &&
         ( val != 1 ) &&
         ( val != 2 ) &&
         ( val != 3 ) &&
         ( val != 4 ) &&
         ( val != 5 ) &&
         ( val != 6 ) &&
         ( val != 7 ) &&
         ( val != 8 ) &&
         ( val != 9 ) &&
         ( val != 10 ) &&
         ( val != 11 ) &&
         ( val != 12 ) &&
         ( val != 13 ) &&
         ( val != 14 ) &&
         ( val != 15 ) )
        return;
    m_navStatusPresent = true;
    m_navStatus = val;
}

int PosReport::getNavStatus() const {

    return m_navStatus;
}

bool PosReport::hasNavStatus() {

    return m_navStatusPresent;
}

void PosReport::setUpdSensorType(int val) {

    if ( ( val != 1 ) &&
         ( val != 2 ) &&
         ( val != 3 ) &&
         ( val != 4 ) )
        return;
    m_updSensorTypePresent = true;
    m_updSensorType = val;
}

int PosReport::getUpdSensorType() const {

    return m_updSensorType;
}

bool PosReport::hasUpdSensorType() {

    return m_updSensorTypePresent;
}

void PosReport::setATONOffPos(bool val) {

    m_ATONOffPosPresent = true;
    m_ATONOffPos = val;
}

bool PosReport::getATONOffPos() const {

    return m_ATONOffPos;
}

bool PosReport::hasATONOffPos() {

    return m_ATONOffPosPresent;
}

QString PosReport::toXML() {

    QString xml = "<PosReport";
    xml.append(" Id=\"" + QString::number(m_id) + "\"");
    xml.append(" SourceId=\"" + QString::number(m_sourceId) + "\"");
    xml.append(" UpdateTime=\"" + m_updateTime.toString("yyyy-MM-ddThh:mm:ss.zzz") + "\"");
    xml.append(" SOG=\"" + QString::number(m_SOG) + "\"");
    xml.append(" COG=\"" + QString::number(m_COG) + "\"");
    xml.append(" Lost=\"" + encode (m_lost) + "\"");
    if ( hasRateOfTurn() ) {
        xml.append(" RateOfTurn=\"" + QString::number(m_rateOfTurn) + "\"");
    }
    if ( hasOrientation() ) {
        xml.append(" Orientation=\"" + QString::number(m_orientation) + "\"");
    }
    if ( hasLength() ) {
        xml.append(" Length=\"" + QString::number(m_length) + "\"");
    }
    if ( hasBreadth() ) {
        xml.append(" Breadth=\"" + QString::number(m_breadth) + "\"");
    }
    if ( hasAltitude() ) {
        xml.append(" Altitude=\"" + QString::number(m_altitude) + "\"");
    }
    if ( hasNavStatus() ) {
        xml.append(" NavStatus=\"" + QString::number(m_navStatus) + "\"");
    }
    if ( hasUpdSensorType() ) {
        xml.append(" UpdSensorType=\"" + QString::number(m_updSensorType) + "\"");
    }
    if ( hasATONOffPos() ) {
        xml.append(" ATONOffPos=\"" + QString(m_ATONOffPos ? "yes" : "no" ) + "\"");
    }
    xml.append(">\n");
    xml.append( m_pos.toXML() );
    xml.append( "</PosReport>\n");
    return xml;
}

QString PosReport::toString(QString lead) {

    QString str = lead + "PosReport\n";
    str.append( lead + "    Id = " + QString::number(m_id) + "\n");
    str.append( lead + "    SourceId = " + QString::number(m_sourceId) + "\n");
    str.append( lead + "    UpdateTime = " + m_updateTime.toString("yyyy-MM-ddThh:mm:ss.zzz") + "\n");
    str.append( lead + "    SOG = " + QString::number(m_SOG) + "\n");
    str.append( lead + "    COG = " + QString::number(m_COG) + "\n");
    str.append( lead + "    Lost = " + m_lost + "\n");
    if ( hasRateOfTurn() ) {
        str.append( lead + "    RateOfTurn = " + QString::number(m_rateOfTurn) + "\n");
    }
    if ( hasOrientation() ) {
        str.append( lead + "    Orientation = " + QString::number(m_orientation) + "\n");
    }
    if ( hasLength() ) {
        str.append( lead + "    Length = " + QString::number(m_length) + "\n");
    }
    if ( hasBreadth() ) {
        str.append( lead + "    Breadth = " + QString::number(m_breadth) + "\n");
    }
    if ( hasAltitude() ) {
        str.append( lead + "    Altitude = " + QString::number(m_altitude) + "\n");
    }
    if ( hasNavStatus() ) {
        str.append( lead + "    NavStatus = " + QString::number(m_navStatus) + "\n");
    }
    if ( hasUpdSensorType() ) {
        str.append( lead + "    UpdSensorType = " + QString::number(m_updSensorType) + "\n");
    }
    if ( hasATONOffPos() ) {
        str.append( lead + "    ATONOffPos = " + QString::number(m_ATONOffPos) + "\n");
    }
    str.append( m_pos.toString(lead + "    ") );
    return str;
}


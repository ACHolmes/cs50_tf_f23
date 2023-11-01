CREATE TABLE pokemon (
    id INTEGER PRIMARY KEY,
    name VARCHAR(100),
    type_1 VARCHAR(100),
    type_2 VARCHAR(100),
    level INTEGER
);
CREATE TABLE trainers (
    id INTEGER PRIMARY KEY,
    name VARCHAR(100)
);
CREATE TABLE partnerships (
    trainer_id INTEGER,
    poke_id INTEGER
);
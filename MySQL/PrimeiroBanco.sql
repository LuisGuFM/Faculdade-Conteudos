CREATE TABLE tb_departamento (
    id_departamento int(11) not null primary key auto_increment,
    departamento varchar(255),
    turn varchar(15),
    qtd_funcionario int(11),
    cargo varchar(255)
) ENGINE=INNODB DEFAULT charset=utf8 COLLATE=utf8_unicode_ci;

CREATE TABLE tb_funcionario (
    id_funcionario int(11) not null primary key auto_increment,
    nome varchar(255),
    email varchar(150),
    celular varchar(20),
    cidade varchar(255),
    estado varchar(100),
    salario decimal(10,2),
    fun_id_departamento int(11) not null,
    foreign key (fun_id_departamento) references tb_departamento(id_departamento)    
) ENGINE=INNODB DEFAULT charset=utf8 COLLATE=utf8_unicode_ci;   